//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 23
#define GREEN 22
#define RED 21
#define BUZZER 19


void setup()
{
  // initialize the digital pin as an output.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(RED, LOW); // turn the LED on 
  delay(1000); // wait for a second
  digitalWrite(RED, HIGH); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(GREEN, LOW); // turn the LED on 
  delay(1000); // wait for a second
  digitalWrite(GREEN, HIGH); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(BLUE, LOW); // turn the LED on
  delay(1000); // wait for a second
  digitalWrite(BLUE, HIGH); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(BUZZER, HIGH);
  delay(500); 
  digitalWrite(BUZZER, LOW);
  delay(500); 
  digitalWrite(BUZZER, HIGH);
  delay(500); 
  digitalWrite(BUZZER, LOW);
  delay(500); 
}
