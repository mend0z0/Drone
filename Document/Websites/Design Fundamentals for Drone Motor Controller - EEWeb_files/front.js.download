( function( $ ) {

	// parse query string
	var parseQueryString = function( name, str ) {
		var regex = new RegExp( '[?&]' + name.replace( /[\[\]]/g, '\\$&' ) + '(=([^&#]*)|&|#|$)' );
		var results = regex.exec( '&' + str );

		return ( ! results || ! results[2] ? '' : decodeURIComponent( results[2].replace( /\+/g, ' ' ) ) );
	}

	// observe DOM changes
	var observeContentChanges = function( el, onlyAdded, callback ) {
		if ( typeof MutationObserver !== 'undefined' ) {
			// define a new observer
			var observer = new MutationObserver( function( mutations, observer ) {
				if ( onlyAdded ) {
					if ( mutations[0].addedNodes.length )
						callback();
				} else {
					if ( mutations[0].addedNodes.length || mutations[0].removedNodes.length )
						callback();
				}
			} );

			// have the observer observe for changes in children
			observer.observe( el, { childList: true, subtree: true } );
		}
	};

	// ready event
	$( function() {
		initPlugin();
	} );

	// custom events trigger
	$( document ).on( rlArgs.customEvents, function() {
		initPlugin();
	} );

	function initPlugin() {
		var containers = [];

		// check for infinite galleries
		$( '.rl-gallery-container' ).each( function() {
			var container = $( this );

			// is it ifinite scroll gallery?
			if ( container.hasClass( 'rl-pagination-infinite' ) )
				containers.push( container );
			// remove loading class
			else
				container.removeClass( 'rl-loading' );
		} );

		// any infinite galleries?
		if ( containers.length > 0 ) {
			var infArgs = [];

			for ( var i = 0; i < containers.length; i++ ) {
				var container = containers[i];
				var gallery = container.find( '.rl-gallery' );
				var galleryId = parseInt( container.data( 'gallery_id' ) );
				var galleryScrollType = container.find( '.rl-pagination-bottom' ).data( 'button' );
				var galleryButton = typeof galleryScrollType !== 'undefined' && galleryScrollType === 'manually';

				infArgs[i] = {
					container: container,
					gallery: gallery,
					galleryId: galleryId,
					galleryButton: galleryButton
				};

				// initialize infinite scroll
				infArgs[i].gallery.infiniteScroll( {
					path: '.rl-gallery-container[data-gallery_id="' + infArgs[i].galleryId + '"] .rl-pagination-bottom .next',
					append: '.rl-gallery-container[data-gallery_id="' + infArgs[i].galleryId + '"] .rl-gallery-item',
					status: false,
					hideNav: '.rl-gallery-container[data-gallery_id="' + infArgs[i].galleryId + '"] .rl-pagination-bottom',
					prefill: ! infArgs[i].galleryButton,
					loadOnScroll: true,
					scrollThreshold: infArgs[i].galleryButton ? false : 400,
					button: infArgs[i].galleryButton ? '.rl-gallery-container[data-gallery_id="' + infArgs[i].galleryId + '"] .rl-load-more' : false,
					debug: false,
					history: false,
					responseBody: 'text',
					onInit: function() {
						// get current arguments
						var args = infArgs[i];

						// infinite with button?
						if ( args.container.hasClass( 'rl-pagination-infinite' ) && args.galleryButton ) {
							// remove loading class
							args.container.removeClass( 'rl-loading' );
						}

						// request event
						this.on( 'request', function() {
							// add loading class
							args.container.addClass( 'rl-loading' );
						} );

						// append event
						this.on( 'append', function( body, path, items, response ) {
							// remove loading class
							args.container.removeClass( 'rl-loading' );

							$.event.trigger( {
								type: 'doResponsiveLightbox',
								script: rlArgs.script,
								selector: rlArgs.selector,
								args: rlArgs,
								pagination_type: 'infinite',
								gallery_id: args.galleryId,
								masonry: args.gallery.hasClass( 'rl-masonry-gallery' ) || args.gallery.hasClass( 'rl-basicmasonry-gallery' ),
								delayLightbox: args.gallery.hasClass( 'rl-expander-gallery' ),
								infinite: {
									gallery: args.gallery,
									body: body,
									items: items,
									response: response
								}
							} );
						} );
					}
				} );
			}
		}

		// initialize event
		$.event.trigger( {
			type: 'doResponsiveLightbox',
			script: rlArgs.script,
			selector: rlArgs.selector,
			args: rlArgs
		} );
	}

	// pagination
	$( document ).on( 'click', '.rl-pagination a.page-numbers', function( e ) {
		var link = $( this );
		var container = link.closest( '.rl-gallery-container' );

		// ajax type pagination?
		if ( container.hasClass( 'rl-pagination-ajax' ) ) {
			e.preventDefault();
			e.stopPropagation();

			var galleryId = container.data( 'gallery_id' );
			var galleryNo = container.find( '.rl-gallery' ).data( 'gallery_no' );

			// add loading class
			container.addClass( 'rl-loading' );

			$.post( rlArgs.ajaxurl, {
				action: 'rl-get-gallery-page-content',
				gallery_id: galleryId,
				gallery_no: galleryNo,
				post_id: rlArgs.postId,
				page: parseQueryString( 'rl_page', link.prop( 'href' ) ),
				nonce: rlArgs.nonce,
				preview: rlArgs.preview ? 'true' : 'false',
				lightbox: rlArgs.script
			} ).done( function( response ) {
				// replace container with new content
				container.replaceWith( $( response ).removeClass( 'rl-loading' ) );

				// trigger main event
				$.event.trigger( {
					type: 'doResponsiveLightbox',
					script: rlArgs.script,
					selector: rlArgs.selector,
					args: rlArgs,
					pagination_type: 'ajax',
					gallery_id: galleryId,
					gallery_no: galleryNo
				} );
			} ).always( function() {
				container.removeClass( 'rl-loading' );
			} );

			return false;
		}
	} );

	// this is similar to the WP function add_action();
	$( document ).on( 'doResponsiveLightbox', function( event ) {
		if ( typeof event.masonry !== 'undefined' && event.masonry === true )
			return false;

		var script = event.script;
		var selector = event.selector;

		if ( typeof script === 'undefined' || typeof selector === 'undefined' )
			return false;

		var args = event.args;
		var delayLightbox = false;

		if ( typeof event.delayLightbox !== 'undefined' && event.delayLightbox === true )
			delayLightbox = true;

		rl_view_image = function( script, url ) {
			$.event.trigger( {
				type: 'doLightboxViewImage',
				script: script,
				url: url
			} );
		}

		rl_hide_image = function( script, url ) {
			$.event.trigger( {
				type: 'doLightboxHideImage',
				script: script,
				url: url
			} );
		}

		// WooCommerce 3.0+ compatibility
		setTimeout( function() {
			var flex = $( '.flex-viewport' );

			if ( args.woocommerce_gallery ) {
				var gallery = $( '.woocommerce-product-gallery' );

				if ( gallery.find( '.woocommerce-product-gallery__trigger' ).length === 0 ) {
					gallery.prepend( '<a href="#" class="woocommerce-product-gallery__trigger">🔍</a>' );

					gallery.on( 'click', '.woocommerce-product-gallery__trigger', function( e ) {
						e.preventDefault();
						e.stopPropagation();

						if ( script === 'lightgallery' ) {
							if ( flex.length ) {
								var image = flex.find( '.flex-active-slide a[data-rel] img' );
								var linkId = flex.find( '.flex-active-slide a[data-rel]' ).data( 'lg-id' );

								image.trigger( 'click.lgcustom-item-' + linkId );
							} else {
								var link = gallery.find( 'a[data-rel]' ).first();
								var image = link.find( 'img' );

								image.trigger( 'click.lgcustom-item-' + link.data( 'lg-id' ) );
							}
						} else if ( script === 'fancybox_pro' ) {
							if ( flex.length ) {
								var index = flex.find( '.flex-active-slide' ).index();
								var imageId = flex.find( '.flex-active-slide a[data-rel]' ).data( 'fancybox' );

								Fancybox.fromOpener( '[data-fancybox="' + imageId + '"]', {
									startIndex: index
								} );
							} else {
								var link = gallery.find( 'a[data-rel]' ).first();

								Fancybox.fromOpener( '[data-fancybox="' + link.data( 'fancybox' ) + '"]', {
									startIndex: 0
								} );
							}
						} else {
							if ( flex.length )
								flex.find( '.flex-active-slide a[data-rel]' ).trigger( 'click' );
							else
								gallery.find( 'a[data-rel]' ).first().trigger( 'click' );
						}
					} );
				}
			}
		}, 10 );

		if ( delayLightbox ) {
			setTimeout( function() {
				initLightbox( event );
			}, 0 );
		} else
			initLightbox( event );
	} );

	/**
	 * Initialize lightbox script.
	 */
	function initLightbox( event ) {
		var script = event.script;
		var selector = event.selector;
		var args = event.args;

		switch ( script ) {
			case 'swipebox':
				var slide = $( '#swipebox-overlay' ).find( '.slide.current' );
				var imageSource = '';
				var allowHide = false;
				var closeExecuted = false;

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).swipebox( {
					useCSS: args.animation,
					useSVG: args.useSVG,
					hideCloseButtonOnMobile: args.hideCloseButtonOnMobile,
					removeBarsOnMobile: args.removeBarsOnMobile,
					hideBarsDelay: args.hideBars ? parseInt( args.hideBarsDelay ) : 0,
					videoMaxWidth: parseInt( args.videoMaxWidth ),
					loopAtEnd: args.loopAtEnd,
					afterOpen: function() {
						closeExecuted = false;

						// update current slide container
						slide = $( '#swipebox-overlay' ).find( '.slide.current' );

						// get image source
						var image = slide.find( 'img' ).attr( 'src' );

						// valid image source?
						if ( typeof image !== 'undefined' ) {
							imageSource = image;

							// trigger image view
							rl_view_image( script, imageSource );
						} else
							imageSource = '';

						// add current slide observer
						observeContentChanges( document.getElementById( 'swipebox-slider' ), false, function() {
							if ( imageSource === '' ) {
								// get image source
								var image = slide.find( 'img' ).attr( 'src' );

								// valid image source?
								if ( typeof image !== 'undefined' ) {
									imageSource = image;

									// trigger image view
									rl_view_image( script, imageSource );
								} else
									imageSource = '';
							}
						} );
					},
					nextSlide: function() {
						// update current slide container
						slide = $( '#swipebox-overlay' ).find( '.slide.current' );

						// get image source
						var image = slide.find( 'img' ).attr( 'src' );

						// valid image source?
						if ( typeof image !== 'undefined' ) {
							imageSource = image;

							// trigger image view
							rl_view_image( script, imageSource );
						} else
							imageSource = '';
					},
					prevSlide: function() {
						// update current slide container
						slide = $( '#swipebox-overlay' ).find( '.slide.current' );

						// get image source
						var image = slide.find( 'img' ).attr( 'src' );

						// valid image source?
						if ( typeof image !== 'undefined' ) {
							imageSource = image;

							// trigger image view
							rl_view_image( script, imageSource );
						} else
							imageSource = '';
					},
					afterClose: function() {
						// afterClose event executed
						closeExecuted = true;

						// allow to hide image?
						if ( allowHide ) {
							// trigger image hide
							rl_hide_image( script, imageSource );

							allowHide = false;
						}
					}
				} );

				// additional event to prevent rl_hide_image to execure while opening modal
				$( window ).on( 'resize', function() {
					if ( ! closeExecuted ) {
						allowHide = true;
					}
				} );
				break;

			case 'prettyphoto':
				var viewDisabled = false;
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).each( function() {
					var el = $( this );
					var title = el.data( 'rl_title' );
					var caption = el.data( 'rl_caption' );

					if ( ! title )
						title = '';

					if ( ! caption )
						caption = '';

					// set description
					el.attr( 'title', caption );

					// set title
					el.find( 'img' ).attr( 'alt', title );
				} );

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).prettyPhoto( {
					hook: 'data-rel',
					animation_speed: args.animationSpeed,
					slideshow: args.slideshow ? parseInt( args.slideshowDelay ) : false,
					autoplay_slideshow: args.slideshowAutoplay,
					opacity: args.opacity,
					show_title: args.showTitle,
					allow_resize: args.allowResize,
					allow_expand: args.allowExpand,
					default_width: parseInt( args.width ),
					default_height: parseInt( args.height ),
					counter_separator_label: args.separator,
					theme: args.theme,
					horizontal_padding: parseInt( args.horizontalPadding ),
					hideflash: args.hideFlash,
					wmode: args.wmode,
					autoplay: args.videoAutoplay,
					modal: args.modal,
					deeplinking: args.deeplinking,
					overlay_gallery: args.overlayGallery,
					keyboard_shortcuts: args.keyboardShortcuts,
					social_tools: args.social ? '<div class="pp_social"><div class="twitter"><a href="//twitter.com/share" class="twitter-share-button" data-count="none">Tweet</a><script type="text/javascript" src="//platform.twitter.com/widgets.js"></script></div><div class="facebook"><iframe src="//www.facebook.com/plugins/like.php?locale=en_US&href=' + location.href + '&amp;layout=button_count&amp;show_faces=true&amp;width=500&amp;action=like&amp;font&amp;colorscheme=light&amp;height=23" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:500px; height:23px;" allowTransparency="true"></iframe></div></div>' : '',
					ie6_fallback: true,
					changepicturecallback: function() {
						// is view disabled?
						if ( viewDisabled ) {
							// enable view
							viewDisabled = false;

							return;
						}

						lastImage = $( '#pp_full_res' ).find( 'img' ).attr( 'src' );

						// trigger image view
						rl_view_image( script, lastImage );

						// is expanding allowed?
						if ( args.allowExpand ) {
							// disable changepicturecallback event after expanding
							$( 'a.pp_expand' ).on( 'click', function() {
								viewDisabled = true;
							} );
						}
					},
					callback: function() {
						// trigger image hide
						rl_hide_image( script, lastImage );
					}
				} );
				break;

			case 'fancybox':
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).fancybox( {
					modal: args.modal,
					overlayShow: args.showOverlay,
					showCloseButton: args.showCloseButton,
					enableEscapeButton: args.enableEscapeButton,
					hideOnOverlayClick: args.hideOnOverlayClick,
					hideOnContentClick: args.hideOnContentClick,
					cyclic: args.cyclic,
					showNavArrows: args.showNavArrows,
					autoScale: args.autoScale,
					scrolling: args.scrolling,
					centerOnScroll: args.centerOnScroll,
					opacity: args.opacity,
					overlayOpacity: parseFloat( args.overlayOpacity / 100 ),
					overlayColor: args.overlayColor,
					titleShow: args.titleShow,
					titlePosition: args.titlePosition,
					transitionIn: args.transitions,
					transitionOut: args.transitions,
					easingIn: args.easings,
					easingOut: args.easings,
					speedIn: parseInt( args.speeds ),
					speedOut: parseInt( args.speeds ),
					changeSpeed: parseInt( args.changeSpeed ),
					changeFade: parseInt( args.changeFade ),
					padding: parseInt( args.padding ),
					margin: parseInt( args.margin ),
					width: parseInt( args.videoWidth ),
					height: parseInt( args.videoHeight ),
					onComplete: function() {
						lastImage = $( '#fancybox-content' ).find( 'img' ).attr( 'src' );

						// trigger image view
						rl_view_image( script, lastImage );
					},
					onClosed: function() {
						// trigger image hide
						rl_hide_image( script, lastImage );
					}
				} );
				break;

			case 'nivo':
				$.each( $( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ), function() {
					var attr = $( this ).attr( 'data-rel' );

					// check data-rel attribute first
					if ( typeof attr === 'undefined' || attr == false ) {
						// if not found then try to check rel attribute for backward compatibility
						attr = $( this ).attr( 'rel' );
					}

					// for some browsers, `attr` is undefined; for others, `attr` is false. Check for both.
					if ( typeof attr !== 'undefined' && attr !== false ) {
						var match = attr.match( new RegExp( selector + '\\-(gallery\\-(?:[\\da-z]{1,4}))', 'ig' ) );

						if ( match !== null )
							$( this ).attr( 'data-lightbox-gallery', match[0] );
					}
				} );

				var observerInitialized = false;
				var changeAllowed = true;
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).nivoLightbox( {
					effect: args.effect,
					clickOverlayToClose: args.clickOverlayToClose,
					keyboardNav: args.keyboardNav,
					errorMessage: args.errorMessage,
					afterShowLightbox: function( lightbox ) {
						var content = $( lightbox )[0].find( '.nivo-lightbox-content' );

						// is observer initialized?
						if ( ! observerInitialized ) {
							// turn it off
							observerInitialized = true;

							// add content observer
							observeContentChanges( document.getElementsByClassName( 'nivo-lightbox-content' )[0], true, function() {
								if ( changeAllowed ) {
									lastImage = content.find( '.nivo-lightbox-image img' ).attr( 'src' );

									// trigger image view
									rl_view_image( script, lastImage );

									// disallow observer changes
									changeAllowed = false;
								}
							} );
						}
					},
					afterHideLightbox: function() {
						// allow observer changes
						changeAllowed = true;

						// trigger image hide
						rl_hide_image( script, lastImage );
					},
					onPrev: function( element ) {
						// disallow observer changes
						changeAllowed = false;

						lastImage = element[0].attr( 'href' );

						// trigger image view
						rl_view_image( script, lastImage );
					},
					onNext: function( element ) {
						// disallow observer changes
						changeAllowed = false;

						lastImage = element[0].attr( 'href' );

						// trigger image view
						rl_view_image( script, lastImage );
					}
				} );
				break;

			case 'imagelightbox':
				var selectors = [];
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).each( function( i, item ) {
					var attr = $( item ).attr( 'data-rel' );

					// check data-rel attribute first
					if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
						selectors.push( attr );
					// if not found then try to check rel attribute for backward compatibility
					else {
						attr = $( item ).attr( 'rel' );

						if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
							selectors.push( attr );
					}
				} );

				if ( selectors.length > 0 ) {
					// make unique
					selectors = _.uniq( selectors );

					$( selectors ).each( function( i, item ) {
						if ( typeof event.pagination_type !== 'undefined' ) {
							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).each( function() {
								$( this ).off( 'click.imageLightbox' );
							} );
						}

						$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).imageLightbox( {
							animationSpeed: parseInt( args.animationSpeed ),
							preloadNext: args.preloadNext,
							enableKeyboard: args.enableKeyboard,
							quitOnEnd: args.quitOnEnd,
							quitOnImgClick: args.quitOnImageClick,
							quitOnDocClick: args.quitOnDocumentClick,
							onLoadEnd: function() {
								lastImage = $( '#imagelightbox' ).attr( 'src' );

								// trigger image view
								rl_view_image( script, lastImage );
							},
							onEnd: function() {
								// trigger image hide
								rl_hide_image( script, lastImage );
							}
						} );
					} );
				}
				break;

			case 'tosrus':
				var selectors = [];
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).each( function( i, item ) {
					var attr = $( item ).attr( 'data-rel' );

					// check data-rel attribute first
					if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
						selectors.push( attr );
					// if not found then try to check rel attribute for backward compatibility
					else {
						attr = $( item ).attr( 'rel' );

						if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
							selectors.push( attr );
					}
				} );

				if ( selectors.length > 0 ) {
					// make unique
					selectors = _.uniq( selectors );

					$( selectors ).each( function( i, item ) {
						if ( typeof event.pagination_type !== 'undefined' ) {
							$( 'body' ).find( '.tosrus-' + item ).remove();

							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).each( function() {
								$( this ).off( 'click.tos' );
							} );
						}

						var tos = $( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).tosrus( {
							infinite: args.infinite,
							autoplay: {
								play: args.autoplay,
								pauseOnHover: args.pauseOnHover,
								timeout: args.timeout
							},
							effect: args.effect,
							keys: {
								prev: args.keys,
								next: args.keys,
								close: args.keys
							},
							pagination: {
								add: args.pagination,
								type: args.paginationType
							},
							// forced
							show: false,
							buttons: true,
							caption: {
								add: true,
								attributes: [ "title" ]
							},
							wrapper: {
								classes: 'tosrus-' + item,
								onClick: args.closeOnClick ? 'close' : 'toggleUI'
							}
						} );

						tos.on( 'sliding.tos', function( event, number ) {
							lastImage = $( $( event.target ).find( '.tos-slider .tos-slide' )[number] ).find( 'img' ).attr( 'src' );

							// trigger image view
							rl_view_image( script, lastImage );
						} );

						tos.on( 'closing.tos', function() {
							// trigger image hide
							rl_hide_image( script, lastImage );
						} );
					} );
				}
				break;

			case 'featherlight':
				var selectors = [];
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).each( function( i, item ) {
					var attr = $( item ).attr( 'data-rel' );

					// check data-rel attribute first
					if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
						selectors.push( attr );
					// if not found then try to check rel attribute for backward compatibility
					else {
						attr = $( item ).attr( 'rel' );

						if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
							selectors.push( attr );
					}
				} );

				if ( selectors.length > 0 ) {
					// make unique
					selectors = _.uniq( selectors );

					// set defaults
					$.extend( $.featherlight.defaults, {
						openSpeed: parseInt( args.openSpeed ),
						closeSpeed: parseInt( args.closeSpeed ),
						closeOnClick: args.closeOnClick,
						closeOnEsc: args.closeOnEsc,
						afterOpen: function( event ) {
							lastImage = event.currentTarget.href;

							// trigger image view
							rl_view_image( script, lastImage );
						},
						afterClose: function() {
							// trigger image hide
							rl_hide_image( script, lastImage );
						}
					} );

					$( selectors ).each( function( i, item ) {
						if ( typeof event.pagination_type !== 'undefined' ) {
							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).each( function() {
								$( this ).off( 'click.featherlight' );
							} );
						}

						// gallery?
						if ( /-gallery-/.test( item ) ) {
							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).featherlightGallery( {
								galleryFadeIn: parseInt( args.galleryFadeIn ),
								galleryFadeOut: parseInt( args.galleryFadeOut ),
								previousIcon: '&#10094;',
								nextIcon: '&#10095;'
							} );
						// video?
						} else if ( /-video-/.test( item ) ) {
							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).featherlight();
						// single image?
						} else {
							$( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' ).featherlight();
						}
					} );
				}
				break;

			case 'magnific':
				var selectors = [];
				var lastImage = '';

				$( 'a[rel*="' + selector + '"], a[data-rel*="' + selector + '"]' ).each( function( i, item ) {
					var attr = $( item ).attr( 'data-rel' );

					// check data-rel attribute first
					if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
						selectors.push( attr );
					// if not found then try to check rel attribute for backward compatibility
					else {
						attr = $( item ).attr( 'rel' );

						if ( typeof attr !== 'undefined' && attr !== false && attr !== 'norl' )
							selectors.push( attr );
					}
				} );

				if ( selectors.length > 0 ) {
					// make unique
					selectors = _.uniq( selectors );

					$( selectors ).each( function( i, item ) {
						var subselector = $( 'a[data-rel="' + item + '"], a[rel="' + item + '"]' );
						var element = $( subselector[0] );
						var media_type = element.data( 'magnific_type' );
						var content_type = element.data( 'rl_content' );

						// check content type first
						if ( typeof content_type !== 'undefined' )
							media_type = content_type;

						// then media type if needed
						if ( typeof media_type === 'undefined' )
							media_type = 'image';

						var fixedContentPos = 'auto';
						var fixedBgPos = 'auto';

						if ( args.fixedContentPos === 'true' )
							fixedContentPos = true;
						else if ( args.fixedContentPos === 'false' )
							fixedContentPos = false;

						if ( args.fixedBgPos === 'true' )
							fixedBgPos = true;
						else if ( args.fixedBgPos === 'false' )
							fixedBgPos = false;

						subselector.magnificPopup( {
							type: media_type === 'gallery' ? 'image' : ( media_type === 'video' ? 'iframe' : media_type ),
							disableOn: args.disableOn,
							midClick: args.midClick,
							preloader: args.preloader,
							closeOnContentClick: args.closeOnContentClick,
							closeOnBgClick: args.closeOnBgClick,
							closeBtnInside: args.closeBtnInside,
							showCloseBtn: args.showCloseBtn,
							enableEscapeKey: args.enableEscapeKey,
							alignTop: args.alignTop,
							autoFocusLast: args.autoFocusLast,
							fixedContentPos: fixedContentPos,
							fixedBgPos: fixedBgPos,
							image: {
								titleSrc: function( item ) {
									var title = item.el.data( 'rl_title' );
									var caption = item.el.data( 'rl_caption' );

									if ( ! title )
										title = '';

									if ( ! caption )
										caption = '';

									return title + '<small>' + caption + '</small>';
								}
							},
							gallery: {
								enabled: subselector.length > 1 && media_type === 'gallery',
								navigateByImgClick: true,
								preload: [0,1]
							},
							callbacks: {
								close: function() {
									rl_hide_image( script, this.currItem.src );
								},
								imageLoadComplete: function() {
									// trigger image view
									rl_view_image( script, this.currItem.src );
								}
							}
						} );
					} );
				}
				break;
		}
	}

} )( jQuery );