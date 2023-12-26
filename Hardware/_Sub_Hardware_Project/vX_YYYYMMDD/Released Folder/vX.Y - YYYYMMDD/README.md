1. 3D File: The 3D file of the project would be in this folder.

	1. 3D View Picture: The 3D view of exported from KiCAD 3D view
		1. _3DView_Top_Prj_vXY.png
		2. _3DView_Bottom_Prj_vXY.png

	2. STEP: The exported .stp file from 3D view of KiCAD
		1. _STEP_Prj_vXY.stp

2. Board Assembly: Any document that is related to assembly will be in this folder

	1. Assembly Guide:
		1. _MASM_Prj_vXY.html	--> This is for hand assembly
		2. _AASM_Prj_vXY.???	--> This is for machine assembly

	2. Board Statistics:
		1. _STATISTICS_Prj_vXY.txt

	3. BOM:
		1. _BOM_Prj_vXY.csv

	4. Netlist:
		1. _NETLIST_Prj_vXY.net

	5. Pick And Place:
		1. _PNP_Prj_vXY.csv

3. PCB Manufacturing: Any document that is related to manufacturing the board will be in this folder

	1. CNC Drill:
		_DRL_Prj_vXY.drl		
		_DRL_MAP_Prj_vXY.gbr

	2. Gerber:
		_GBR_Top_SilkScreen_Prj_vXY.gto
		_GBR_Top_Mask_Prj_vXY.gts
		_GBR_Top_Cu_Prj_vXY.gtl
		-----------------------------------
		_GBR_In1_Cu_Prj_vXY.g2
		_GBR_In2_Cu_Prj_vXY.g3
		_GBR_In3_Cu_Prj_vXY.g4
		_GBR_In4_Cu_Prj_vXY.g5
		-----------------------------------
		_GBR_Bottom_Cu_Prj_vXY.gbl
		_GBR_Bottom_Mask_Prj_vXY.gbs
		_GBR_Bottom_SilkScreen_Prj_vXY.gbo
		-----------------------------------
		_GBR_EdgeCut_Prj_vXY.gml

	3. Stackup Information:
		_STACKUP_Prj_vXY.csv

	4. Stencil:
		_STC_Top_Prj_vXY.gtp
		_STC_Bottom_Prj_vXY.gbp
		_STC_EdgeCut_Prj_vXY.gml

4. Schematic (PDF): Placing the PDF version of schematic captures

5. Source files: All the source except history folder.

6. Tests: Any test that is related to this version and release number will be stored here. It mainly contains .png or .mp4 files.