# LED Options Mixer

## A Preface on Bits
- The number of bits for ```analogRead()``` and ```analogWrite()``` depend on your microcontroller.
- I used the ESP32-S3 N16R8, so my ```analogRead()``` uses 12 bits (0 -> 2^12 - 1) and my ```analogWrite()``` uses 8 bits (0 -> 2^8 - 1).
- If you use my code, modify it to use the recommended range for your microcontroller.

## About
The LED Options Mixer is an interactive circuit, showcasing various LED properties that can be combined together.

## Materials
This section assumes you have a data transfer cable and a microcontroller.

- Jumper wires (recommended at least 15 of three different colors)
- 5KΩ potentiometers (3)
- 220Ω resistors (5)
- LEDs (5 | Red, Yellow, Green, Blue, White)
- Breadboards (2 recommended)

## Setup
1. Build the circuit using the schematic provided in ``LED Options Mixer.kicad_sch``.
2. On Visual Studio Code, install the PlatformIO extension if you don't have it installed yet.
3. Clone the repo. If you have Git installed, clone the project and enter its folder using the following terminal lines:

```git clone https://github.com/MicroChip818/LED-Options-Mixer.git```

```cd LED-Options-Mixer```

Alternatively, download and extract the project's .zip file before opening a terminal inside its folder.

4. Run the project and upload: ```pio run -t upload```

## Functionality
Each potentiometer is responsible for adjusting one of these three values upon turning:
- Brightness (PWM value with AnalogWrite)
- Period (delay time between blinking)
- Color (0-5, determines how many LEDs light up)