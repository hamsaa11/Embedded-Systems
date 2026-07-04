# Button Controlled LED

This is a simple Arduino project where an LED is controlled using a push button. The LED turns ON when the button is pressed and turns OFF when the button is released.

## Components Used
- Arduino Uno
- LED
- Push Button
- 1 kΩ Resistor
- 10 kΩ Resistor
- Jumper Wires

## Connections
- LED connected to Digital Pin 8 through a 1 kΩ resistor.
- Push button connected to Digital Pin 2.
- 10 kΩ resistor used as a pull-down resistor.
- 5V and GND connected as required.

## Working
When the push button is pressed, the Arduino reads a HIGH signal from pin 2 and turns the LED ON. When the button is released, the signal becomes LOW and the LED turns OFF.

## Output
The LED glows only while the push button is pressed.
