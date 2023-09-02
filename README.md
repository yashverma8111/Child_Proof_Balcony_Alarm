# Child-Proof Balcony Alarm System

## Introduction

The Child-Adult Height Alarm System is a simple Arduino-based project designed to differentiate between the heights of children and adults attempting to cross a door or threshold. It does this by utilizing an ultrasonic sensor (HC-SR04) to measure the height of individuals passing through the doorway. If the system detects a child's height, it triggers an alarm to alert the appropriate personnel.

## Components

To build this project, you will need the following components:

1. Arduino board (e.g., Arduino Uno)
2. HC-SR04 Ultrasonic Sensor
3. Active Buzzer
4. Jumper wires
5. Breadboard (optional, for easier prototyping)

## Wiring

Connect the components as follows:

- Connect the trigPin (trigger pin) of the HC-SR04 to Arduino pin 12.
- Connect the echoPin (echo pin) of the HC-SR04 to Arduino pin 11.
- Connect one terminal of the active buzzer to Arduino pin 13.
- Connect the other terminal of the active buzzer to ground (GND) on the Arduino.
- Connect the VCC and GND pins of the HC-SR04 to 5V and GND on the Arduino, respectively.

## Code Explanation

The provided Arduino code defines the functionality of the Child-Adult Height Alarm System. Here's an overview of what the code does:

1. It sets up the necessary pins and initializes the serial communication for debugging.

2. In the `loop()` function, it sends a brief pulse (10 microseconds) to the ultrasonic sensor's trigger pin (trigPin) to initiate a distance measurement.

3. After a short delay, it reads the duration of the echo pulse, which corresponds to the time taken for the ultrasonic waves to bounce back.

4. The travel time of the ping is stored in the `pingTravelTime` variable.

5. The code then checks if the `pingTravelTime` falls within a certain range (between 5000 and 6000 microseconds). This range is set based on the assumption that children are generally shorter, and adults are taller. You may need to adjust these values to fit your specific requirements.

6. If the `pingTravelTime` is within the specified range, it triggers the buzzer to play an alarm sound, indicating that a child is attempting to cross the doorway.

7. If the `pingTravelTime` is outside the specified range, it turns off the buzzer.

## Usage

1. Upload the provided Arduino code to your Arduino board using the Arduino IDE.

2. Make sure the wiring is correct as described in the "Wiring" section.

3. Power up the system by connecting the Arduino to a power source or a USB port on your computer.

4. The system is now operational. When someone passes through the doorway, the ultrasonic sensor will measure their height, and if it falls within the specified range, the buzzer will sound the alarm.

## Customization

- You can adjust the range values (5000 and 6000 in the code) to suit your specific requirements for differentiating between children and adults based on height.

## Link to the Demo
- https://drive.google.com/file/d/1DQnoyuYJbEFghp22AVnBfPd4teXVQN9I/view?usp=sharing

- You can replace the buzzer with other alarm devices or integrate additional components for remote alerts or logging.

## Conclusion

The Child-Adult Height Alarm System is a basic project that can be customized and expanded upon to suit various applications where height differentiation is necessary for security or monitoring purposes. It's a great starting point for exploring Arduino-based sensor systems and alarm triggers.
