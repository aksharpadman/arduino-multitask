const int ledPin =  13;      // the number of the LED pin
const int motorPin1 = 11;
const int motorPin2 = 12;

int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated
int rotation = 0; 

long interval = 1000;           // interval at which to blink (milliseconds)
 
void setup() {
  // set the digital pins as output:
  pinMode(ledPin, OUTPUT);      
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
} 

void loop()
{
  
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
 
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
 
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
 if (Serial.available() > 0) {    // is a character available?
    rotation = Serial.read();
    if (rotation == 1)
    {
     //For Anti Clock-wise motion
      digitalWrite(motorPin1,HIGH) ;
      digitalWrite(motorPin2,LOW) ;
    }
 }
 else
    {
    //For Clock-wise motion 
      digitalWrite(motorPin1,LOW) ;
      digitalWrite(motorPin2,HIGH) ;
    }
    
       

}
