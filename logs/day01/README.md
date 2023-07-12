# :rocket: Day 01: Incoming broadcast from InventrCorp

## Connect HERO board

![](initialize.gif)

### Initialize digital pin LED_BUILTIN and run "Blink" Sketch
**Key Learning Points:**

- Downloaded the Arduino [IDE](http://arduino.cc/download) and [Drivers](http://inventr.io/downloads) onto computer
- Connected the Hero (Arduino UNO) board to the computer and selected the correct board and port in the IDE window
> **Tools** > **Board** > **Arduino AVR Boards** > **Arduino Uno** & **Tools** > **Port** > **COM3** (Arduino Uno)
- Accessed the built in Sketch program called "Blink" available within the IDE and uploaded it to the HERO board.
> The "Blink" program causes the on board light on the HERO board to blink on and off. **File** > **Examples** > **01.Basics** > **Blink**
- A setup() function runs once when you press reset or power the board. (the void datatype for the setup() function indicates that the function is not expected to return any information when it is run).
```C++
void setup() {
  // put your setup code here, to run once:
  
}
```
- The loop() function runs repeatedly until you press reset or power down the board. (the void datatype for the loop() function indicates that the function is not expected to return any information when it is run).
```C++
void loop() {
  // put your main code here, to run repeatedly:
  
}
```
- The pinMode command is a built-in function of the Hero and is used to initialize a digital pin as an OUTPUT, in this case, pin 13 which is also given the name LED_BUILTIN. This is used within the setup() function
```C++
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // or pinMode(13, OUTPUT)

}
```
- ThedigitalWrite() function tells a pin to do something. This is used within the loop() function.
```C++
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // or digitalWrite(LED_BUILTIN, LOW) (on/off)

}
```
- The delay() function gives the command to do nothing, or delay for specified period of time. This is used within the loop() function.
```C++
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // This causes a delay of 1 second, or 1000 ms

}
```
- Uploaded the Sketch program to the HERO board in order to run it and modified the delay() code to change the amount of time that the LED is expected to be on and off.

