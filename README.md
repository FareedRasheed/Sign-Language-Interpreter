# Sign Language Interpreter Glove
Most existing sign language interpretation solutions rely on computer vision models requiring a camera. A wearable glove-based approach offers greater versatility; A glove is usable in diverse environments without a camera or screen.

## Developement
The Sign Language Interpreter Glove is a wearable device that uses an Arduino and an MPU-6050 accelerometer/gyroscope to recognize simple gestures performed by the user. Motion data is transmitted to a computer-based ESP (Example-based Sensor Prediction) model, which can be trained using machine learning to identify specific gestures.

This was originally developed during Hack The North and involved a simple set-up with hardware taped to a latex glove, however, I later 3D printed a mount for the Arduino electrical components. 

## The Future
The ESP model used for gesture recognition can only receive data from one sensor at a time and supports a maximum of 10 gestures, limiting the glove to tracking only one finger.
To enhance functionality, a more advanced software framework is needed—one capable of receiving data from multiple sensors, allowing for full-hand tracking and the recognition of more complex gestures. This would significantly improve accuracy and expand the range of sign language expressions the glove can interpret.


Although this prototype has limited functionality, it demonstrates the potential of physical, wearable sign language interpreters and their advantages over traditional camera-based solutions.
