# 🚀 ESP32 Servo Control using Blynk and PCA9685

This project demonstrates how to control multiple servo motors using an **ESP32**, a **PCA9685 16-channel PWM driver**, and the **Blynk IoT platform**. You can control up to 5 servos remotely from your smartphone through the Blynk app.

## 🔧 Hardware Required

- ESP32 development board  
- PCA9685 PWM driver module (I2C based)  
- 5x Servo Motors (SG90 or similar)  
- External power supply for servos  
- Jumper wires and breadboard  
- Internet connection (WiFi)

## 📱 Software Used

- Arduino IDE  
- Blynk IoT App (available on iOS and Android)  
- Blynk Libraries for ESP32  
- Adafruit PWM Servo Driver library

## 🧠 How It Works

- The ESP32 connects to your WiFi and Blynk cloud.
- Virtual pins (V0 to V4) from the Blynk app send angle values (0–180°).
- The PCA9685 receives PWM values via I2C to rotate each servo accordingly.

## 🔌 Pinout

| PCA9685 Channel | Servo Motor |
|------------------|--------------|
| 0                | Servo 1      |
| 1                | Servo 2      |
| 2                | Servo 3      |
| 3                | Servo 4      |
| 4                | Servo 5      |

## 🧪 Setup Instructions

1. Install required libraries in Arduino IDE:
   - `Adafruit PWMServoDriver`
   - `Blynk` and `BlynkSimpleEsp32`
2. Replace your WiFi SSID, password, and Blynk Auth token in the code.
3. Upload the code to ESP32.
4. Connect servos to PCA9685 and power everything up.
5. Use sliders on Blynk (V0 to V4) to control servos.

## 📷 Screenshot

![imag alt](https://github.com/SUDO-KUNDAN23/ESP32-based-robotic-arm/blob/aa43a10b6a0710fe458f0deb880a4172914d8849/Screenshot%20(202).png))

## 📄 License

This project is open-source under the MIT License.  
Feel free to modify and use it in your projects.

---

### 👨‍💻 Author

Created by Kundan Kuamr Munda – Electrical Engineer | Robotics | Embedded Systems  
