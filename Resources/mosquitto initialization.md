## Useful command lines to work with mosquitto broker - pictures should be added later...



  - sudo apt update && sudo apt upgrade
  - sudo apt install mosquitto

  - sudo apt remove mosquitto  --> remove mosquitto but conf wont be removed
  - sudo apt purge mosquitto    --> remove mosquitto completely








#### Enable mosquitto services on RPi
  - sudo systemctl enable mosquitto.service
  - 
#### Enable mosquitto services on RPi
  - sudo services mosquitto stop

#### Run mosquitto broker on RPi
  - mosquitto -c YOURCONFG.conf -v

#### Restart mosquitto broker on RPi
  - sudo systemctl restart mosquitto

#### Check mosquitto broker status on RPi
  - sudo systemctl status mosquitto
#### Kill mosquitto service
  - Finding the processor id first
  1- ps -ef|grep mosquitto
  2- sudo kill PROCESSOR_ID

#### The port mosquitto is listening to
  - sudo netstat -af|grep mosquitto

