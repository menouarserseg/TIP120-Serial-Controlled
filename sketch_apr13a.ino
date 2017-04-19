int ledPin=9; 
int input = 0;
int value; 
void setup ()  
{ 
  Serial.begin(9600); 
  pinMode(ledPin,OUTPUT); 
} 
void loop () 
{ 
   if (Serial.available() > 0) {
   input = Serial.read();
   input = map(input, 48, 57, 105, 255);
   input = constrain(input, 0, 255);
   Serial.print(input);
   if (input == 105) {
   input = 0;
   }
   analogWrite(ledPin, input); 
   }
} 
