int Light = 12 ; //The HERO board pin (12) that the LED is wired to

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize a digital pin as an output, then set its value to HIGH (5V)
  pinMode(Light, OUTPUT);
  digitalWrite(Light, LOW);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Light, LOW);
	delay(2000);
	digitalWrite(Light, HIGH);
	delay(100);

}
