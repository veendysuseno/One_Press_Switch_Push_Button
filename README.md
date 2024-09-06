# Satu Saklar Tekan dengan LED (One_Press_Switch_Push_Button)

This Arduino project uses a push button to control an LED. When the button is pressed, the LED turns on; when the button is released, the LED turns off.

## Components

- **LED**: Connected to pin 13.
- **Push Button**: Connected to pin 7.
- **Resistors**: Appropriate resistors for the button (usually a pull-down resistor).

## Code Overview

1. **Setup**:

   - Initializes the LED pin as an output and the button pin as an input.

2. **Loop**:
   - Reads the state of the button.
   - Turns the LED on when the button is pressed (HIGH) and off when the button is not pressed (LOW).

## Code

```cpp
/* Satu Saklar Tekan Push Button Hidupkan satu LED */

int LED = 13; // Inisialisasi LED pin 13
int BUTTON = 7; // Inisialisasi pin 7 sebagai input saklar tekan
int val = 0; // Variabel val digunakan untuk menyimpan nilai input

void setup() {
    pinMode(LED, OUTPUT); // Set LED (pin 13) sebagai Output
    pinMode(BUTTON, INPUT); // Set BUTTON (pin 7) sebagai input
}

void loop(){
    val = digitalRead(BUTTON); // Membaca & menyimpan nilai input
    // Mengecek input ketika HIGH (saat saklar ditekan)
    if (val == HIGH) {
        digitalWrite(LED, HIGH); // LED ON
    } else {
        digitalWrite(LED, LOW); // LED OFF
    }
}
```

## Usage

- Setup: Connect the LED to pin 13 and the push button to pin 7 on the Arduino. Make sure to include a pull-down resistor with the button.
- Run: Upload the code to the Arduino and test the button. The LED should light up when the button is pressed and turn off when released.

#### Feel free to modify pin assignments or adjust the code as needed for your setup.
