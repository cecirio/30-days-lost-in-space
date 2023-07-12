# :rocket: Day 02: It's really dark in here...

## Turn an LED on

![](led.gif)

### Complete an LED circuit
**Key Learning Points:**

- Learned the importance of using a 220ohm resistor in series with the LED (Light Emitting Diode) to protect the LED from the flow of too much current through it.
  > _**Current = Voltage/Resistance**_ _(5V/220Ohm = 0.023Amp)_
- In order for an LED to turn on, current must flow from 5V through the positive lead and out of the negative lead back to GND (0V).
- The longer lead of an LED is the positive that must connect to the positive output voltage (5V) and the shorter lead is negative and connects to GND.
- Created a sketch program to cause an LED light to blink on the breadboard.
- Defined 2 integer variables at the beginning of the program and used them to identify which pins on the Hero board are of interest in this project.
```C++
int Light = 12 ; // This defines “Light” as an integer which takes the value 12, the pin on the Hero board that the LED is connected to

void setup() {

}
```
- The ‘-’ symbol indicates ground. The ‘+’ symbol indicates a positive voltage.
  > NOTE: Inserting and disconnecting wire into a breadboard hole helps if it is difficult to insert components at first
