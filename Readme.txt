-Aim of the project is to implement a LED blinking every 1 second and also a DC motor which changes direction depending on serial input

-requirement
	Arduino Uno, 5v DC motor(Does not require H bridge because the Arduino supply is enough) , 1 LED

-The DC motor is connected to the 11 and 12 pins of arduino to control its direction

-LED is connected to the 13 pin

-Serial.available() and Serial.read() are used to control dc motor direction. If the input given is 1 then the DC motor rotates Anti Clockwise and otherwise it revolves in clockwise direction
