# Arduino Hexapod

Six-legged robot built on **Arduino Mega**, controlled from a mobile app over Bluetooth.

Built with a partner as a high-school electronics / robotics project.

## Features

- Walking forward and backward
- Turning left and right
- Sit / stand / still poses
- Dance and wave animations
- Obstacle awareness with IR distance sensors
- Wake-from-sit with a PIR sensor
- Sound playback with an MP3 module

## Hardware

- Arduino Mega
- 18 servo motors (3 per leg)
- IR distance sensors
- PIR sensor
- Bluetooth module (Serial3)
- MP3 module

## Software

The main sketch is `working_everything.ino`.

Bluetooth commands from the phone app drive the robot:

| Command | Action |
| --- | --- |
| `1` | Sit |
| `2` | Stand |
| `3` | Walk forward |
| `4` | Walk backward |
| `5` | Turn right |
| `6` | Turn left |
| `7` | Stop / still |
| `8` | Dance |
| `9` | Wave |
| `a` | Sit and wait for PIR, then stand |

Supporting sketches cover individual movements such as `walk.forward.ino`, `walk.backward.ino`, `left.ino`, `right.ino`, `sit.ino`, `stand.ino`, and the dance routines.

## My contribution

- Servo control and leg movement code
- Hardware wiring
- Sensor and Bluetooth integration
- Mobile app control flow
- Full system integration and testing
