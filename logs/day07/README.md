# :rocket: Day 07: We still need to keep an eye on this

## Monitor and respond to the sate of the battery 

![](battery_level.gif)

### Determine battery percentage and monitor charging levels
**Key Learning Points:**
- Declared 4 additional **unsigned integer** variables to hold larger numbers: batteryCapacity, batteryLevel, ticks and wait.
  > NOTE: Integer [int] variables are whole numbers that can be negative (-) or positive (+); defined by their most significant bit (the last bit to the left). An “unsigned” variable does not, but instead the most significant bit is just the next power of two.
Because the most significant bit distinguishes a number as negative (1) or positive (0) the other 15 bits identify the integer.
Arduino has a 16 bit restriction to hold and process short integer values. This ensures that code runs more efficiently. Therefore, the biggest signed short integer that can be used is 32,768 (2^15).
Since the value of our batteryCapacity variable is set at 50,000, greater than the standard short integer maximum, it needs to be defined as an **unsigned integer** (2^16 = 65,536).
- Declared a double variable called percentFull.
  > NOTE: **Double variables** are used for decimal values with double precision or twice as many bits (64 bits) than floating point numbers (32 bits) which are single precision, aka **float variables**. In other words, where decimal digits are 14 or 15 digits as opposed to float numbers of 7 digits.

```C++
unsigned int batteryCapacity = 50000;
unsigned int batteryLevel = 0;
unsigned int ticks = 0;
unsigned int wait = 100;
double PercentFull;
```

- Created a new function called **PrintBatteryPercentage()** that will be called later in the loop() function.
The function prints the value of the **ticks variable** to the serial monitor along with some text.

- Calculated the percentFull value, which is a double, by first converting the integer variables batteryLevel
and batteryCapacity into doubles and then used them in the percentage calculation. The result was printed to the
serial monitor, followed by the “%” symbol.

```C++
void PrintBatteryPercentage() {
// print the elapsed time
    Serial.print(ticks);
    Serial.print(" ms    Charge at ");

// convert the integers to decimal numbers, divide them and print...
    PrecentFull = 100*((double)batteryLevel / (double)batteryCapacity);
    Serial.print(PercentFull);

// print a percent character and line return...
    Serial.println("%");
}
```

- Read the sensor value and added it to the batteryLevel, then added the value of the **wait variable** to the variable ticks, which represented the time taken.
- Applied a logical test to determine if the batteryLevel had reached the batteryCapacity and printed out the BatteryPercentage to the serial monitor if it was less than 100%, otherwise printed out the message "FULLY CHARGED".
- Set the batteryLevel to the batteryCapacity and the ticks to zero.
- Added a delay for a long pause before restarting the "battery charging process".

```C++
void loop() {
    sensorValue = analogRead(sensorPin);  // read the value from the sensor:
    batteryLevel += sensorValue;
    ticks += wait;

    if (batteryLevel >= batteryCapacity) {
        Serial.print(ticks);
        Serial.print(" ms    ");
        Serial.println("FULLY CHARGED");
        batteryLevel = batteryCapacity;  // to prevent integer from continuing to increase
        ticks = 0;
        delay(20000);  // long pause
    }
    else {
        PrintBatteryPercentage();
    }

    delay(wait);
}
```

#

### Diagram

![](battery_level.png)
