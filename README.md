#   Arduino Password Based Door Lock System

A simple **Password Protected Door Lock** using **Arduino UNO**, **4x4 Matrix Keypad**, **I2C LCD (16x2)**, and **Servo Motor**.

The user enters a **4-digit PIN** using the keypad. If the PIN matches the stored password, the servo unlocks the door for 2 seconds and then locks it again automatically.

---

## 📸 Project Preview
---
<p align="center">
  <img src="https://raw.githubusercontent.com/Surya-8948/KeyPad_Based_Door_Lock-/main/Arduino_KeyPad_Based_Door_Lock.png"
       alt="Arduino Keypad Based Door Lock"
       width="900">
</p>
---

# ✨ Features

- 🔐 4 Digit Password Protection
- 📟 16x2 I2C LCD Display
- ⌨️ 4x4 Matrix Keypad Input
- 🔑 Servo Based Door Lock
- ⭐ Password Hidden with '*'
- ❌ Wrong Password Detection
- 🔄 Auto Lock after 2 Seconds
- 🛠 Beginner Friendly Code

---

# 🛠 Hardware Required

| Component | Quantity |
|-----------|---------:|
| Arduino UNO / Nano | 1 |
| 4x4 Matrix Keypad | 1 |
| 16x2 I2C LCD | 1 |
| SG90 / MG90 Servo Motor | 1 |
| Jumper Wires | As Required |
| Breadboard | 1 |

---

# 🔌 Circuit Connections

## Keypad

| Keypad | Arduino |
|---------|----------|
| R1 | D11 |
| R2 | D10 |
| R3 | D9 |
| R4 | D8 |
| C1 | D7 |
| C2 | D6 |
| C3 | D5 |
| C4 | D4 |

---

## Servo Motor

| Servo | Arduino |
|--------|----------|
| Signal | D3 |
| VCC | 5V |
| GND | GND |

---

## I2C LCD

| LCD | Arduino UNO |
|------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# 📚 Required Libraries

Install these libraries using **Arduino Library Manager**.

```
LiquidCrystal_I2C
```

```
Keypad
```

```
Servo
```

---

# 📂 Project Structure

```
Password-Door-Lock
│
├── Password_Door_Lock.ino
├── README.md
├── images
│   ├── circuit.png
│   ├── keypad.jpg
│   └── demo.gif
└── LICENSE
```

---

#  How It Works

```
Power ON
    │
    ▼
LCD Shows
Enter PIN
    │
    ▼
Enter 4 Digits
    │
    ▼
Press #
    │
    ▼
Password Correct?
    │
 ┌──┴─────┐
 │        │
Yes      No
 │        │
 ▼        ▼
Unlock   Wrong PIN
 │
 ▼
Wait 2 Seconds
 │
 ▼
Lock Again
```

---

# 🔑 Default Password

```
1234
```

Change it easily in the code.

```cpp
const String SECRET = "1234";
```

---

# 📺 LCD Display

### Startup

```
Enter PIN:
```

### While Typing

```
Enter PIN:
****
```

### Correct Password

```
Unlocked
```

### Wrong Password

```
Wrong PIN
```

---

# ⚙️ Program Flow

1. Power ON Arduino
2. LCD displays **Enter PIN**
3. User enters a 4-digit password
4. Press **#**
5. Password is verified
6. If correct
   - Servo unlocks
   - LCD displays **Unlocked**
   - Wait 2 seconds
   - Servo locks again
7. If incorrect
   - LCD displays **Wrong PIN**
   - User can try again

---

# 📌 Code Highlights

## Password

```cpp
const String SECRET = "1234";
```

---

## Read Keypad

```cpp
char key = keypad.getKey();
```

---

## Verify Password

```cpp
if(input == SECRET)
{
    // Unlock
}
else
{
    // Wrong Password
}
```

---

## Servo Lock

```cpp
lockServo.write(180);
```

---

## Servo Unlock

```cpp
lockServo.write(0);
```

---

# 💻 Serial Monitor

This project does **not** require Serial Monitor.

Everything is displayed on the LCD.

---

# 🎯 Applications

- Smart Door Lock
- Digital Locker
- Office Access System
- Home Security
- Cabinet Lock
- School Project
- Electronics Project
- Arduino Learning

---

# 🔮 Future Improvements

- 🔹 Change Password from Keypad
- 🔹 EEPROM Password Storage
- 🔹 RFID Card Unlock
- 🔹 Fingerprint Sensor
- 🔹 Bluetooth Unlock
- 🔹 ESP32 WiFi Control
- 🔹 OTP Verification
- 🔹 Buzzer Alarm
- 🔹 Wrong Attempt Counter
- 🔹 OLED Display
- 🔹 Mobile App Control

---

# ❗ Troubleshooting

### LCD Not Working

- Check I2C Address
- Try **0x27** or **0x3F**

---

### Servo Not Rotating

- Use External 5V Supply
- Connect Common GND

---

### Keypad Not Responding

- Verify Row and Column Wiring
- Check Pin Numbers

---

### Wrong Password Every Time

- Ensure the password is exactly 4 digits.
- Press **#** after entering the PIN.

---

---

# 👨‍💻 Author

## Surya Mani Bajpai

**Electronics Consultant | Embedded Systems | IoT | Robotics | PCB Design | AI | Drone Technology Trainer**

---

# ⭐ Support

If you like this project,

⭐ Star this repository

🍴 Fork this repository

💡 Contribute new features

📢 Share with your friends

---

# 📜 License

This project is licensed under the **MIT License**.

---

## ❤️ Made with Arduino, Keypad, LCD & Servo
