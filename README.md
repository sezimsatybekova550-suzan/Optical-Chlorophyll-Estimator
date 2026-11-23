Optical Chlorophyll Estimator

1. Project Description

The Optical Chlorophyll Estimator is an electronic project designed to demonstrate the principle of optical measurement of chlorophyll in plant leaves.

The system uses red and infrared light sources and an optical sensor to detect changes in light intensity. The collected data is processed by an Arduino Uno and displayed on an LCD screen.

2. Project Objectives

* Understand the principle of optical chlorophyll measurement.
* Use electronic components to build a light-sensing system.
* Control LEDs and read sensor values using Arduino.
* Process sensor readings and calculate an optical ratio.
* Display measurement results on an LCD screen.

3. Components Used

The planned physical prototype includes:

* Arduino Uno
* Red LED
* Infrared (IR) LED
* BPW34 photodiode
* LM358 operational amplifier
* 16×2 LCD display
* Resistors
* Breadboard
* Jumper wires

4. Working Principle

The system is based on the interaction between light and plant leaves.

1. The red LED illuminates the leaf.
2. The infrared LED provides a second light source.
3. The BPW34 photodiode detects the light received from the leaf.
4. The sensor signal is processed by the electronic circuit.
5. Arduino reads the sensor values and calculates an optical ratio.
6. The results are displayed on the LCD screen.

The optical ratio can help demonstrate differences in light absorption and reflection. Additional calibration and testing are required to estimate actual chlorophyll concentration.

5. Circuit Diagram and Simulation

A Tinkercad simulation was created to test the basic light-sensing principle and Arduino operation.

Important: The current Tinkercad simulation uses an LDR photoresistor instead of the BPW34 photodiode. The LDR is used only to demonstrate changes in light intensity because the planned photodiode was not available in the simulation.

The physical prototype with the BPW34 photodiode has not yet been assembled.

6. Arduino Code

The Arduino program is available in the Code folder:

Code/chlorophyll_estimator.ino

The program:

* Controls the red and second LED.
* Reads sensor values.
* Calculates an optical ratio.
* Displays readings on the LCD.
* Sends measurement data to the Serial Monitor.

7. Testing Results

The Tinkercad simulation was used to check the basic operation of the system.

The LDR sensor responded to changes in illumination:

* Low illumination: approximately 54
* High illumination: approximately 974

The LCD display and Arduino code were also tested in the simulation.

These values demonstrate light detection only. They are not actual chlorophyll measurements.

8. Individual Contribution

Student: Sezim Satybekova
Group: EEAIR-25
Course: Electronic Components and Circuits

My contribution includes:

* Project planning and component selection.
* Studying the optical measurement principle.
* Preparing the Arduino code.
* Creating and testing the Tinkercad simulation.
* Preparing project documentation and analysis.

9. Project Status

The basic Arduino program and Tinkercad simulation have been prepared and tested.

The physical prototype has not been completed because the required components, including the BPW34 photodiode, were not available in time.

The simulation uses an LDR photoresistor as a temporary alternative for demonstrating the basic light-sensing principle.

10. Future Improvements

* Assemble the physical circuit using the BPW34 photodiode.
* Add the LM358 signal-conditioning circuit.
* Test the red and infrared light sources separately.
* Calibrate the sensor using real plant leaves.
* Improve measurement accuracy.
* Develop a reliable relationship between optical readings and chlorophyll concentration.

11. Conclusion

This project demonstrates the basic principle of an optical light-sensing system using Arduino.

The simulation helped test the sensor response, Arduino program, and LCD display. Although the physical prototype has not yet been completed, the project provides a foundation for developing a more accurate optical chlorophyll measurement device.