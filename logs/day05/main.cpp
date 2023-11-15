int red = 10;
int yellow = 11;
int green = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW); //turns red off when code loops back
  delay(5000);
   
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);

  // turn off yellow, then turn red on for 5 seconds
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);

}
