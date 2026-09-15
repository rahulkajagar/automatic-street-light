# automatic-street-light
Arduino-based automatic street light system using an LDR sensor.
Automatic Street Light An Arduino based automatic street light system which automatically detects the surrounding light and turns ON and OFF the LED accordingly.
Project Idea An automatic street light system which automatically turns on the light when it is dark outside and turns it off when there is enough light outside. 
List of Components Used • Arduino Uno • Light Dependent Resistor (LDR) • 1 LED • 220 Resistance • 10K Resistance • Breadboard • Jumper Wires 
Working An LDR sensor gives a different analog output according to the light intensity.The Arduino does the following• Read the input from the LDR• Compares the value with a set threshold• Turns ON the light if it is dark• Turns OFF the light if it is bright Software Embedded C / C++What Will You Learn • Working of LDR sensor • Reading the sensor values • Use sensors to control an external device • Conditional Programming • Arduino programming 
How to run the project 1.Open the file in Arduino IDE 2. Connect the LDR to the A0 Pin 3. Connect the LED to the 13th pin 4. Program the Arduino 5.Open Serial Monitor at 9600 baud 6.Change the threshold if required 
Project Structure  
README.md 
automaticstreetlight.ino 
.gitignore
