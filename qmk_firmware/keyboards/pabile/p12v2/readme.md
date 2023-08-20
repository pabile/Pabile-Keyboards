# Pabile 12-Key Macropad (P12)

Powered by RP2040 Pico Microcontroller

- Keyboard Maintainer: [Pabile](https://github.com/pabile/) 
- Hardware Supported: RP2040 Pico
- Hardware Availability: [Pabile Keyboards](https://github.com/pabile/Pabile-Keyboards)

Make example for this board (after setting up your build environment):

```sh
qmk compile -kb p12rp2040 -km default
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Features

- Raspberry Pi RP2040 Chip + 4/8/16MB Flash memory - Dual-core Cortex M0+ at ~130MHz with 264KB of RAM.
- 3x4 Mechanical key switch sockets - accepts any Cherry MX-compatible switches. Individually tied to GPIO pins (not matrix wired)
- Up to three (3) rotary encoders with push-switch on GPIO pin. Push switch is also used for entering bootloader mode when held down on power-up or reset.

## Bootloader

Enter the bootloader in 4 ways:

* **Bootmagic reset**: Hold down the key just below the rotary encoder push-button on power-up.
* **Physical reset button**: Press twice the button on the side while the board is connected.
* **BOOT button** Hold down the rotary encoder push-button on power-up or reset.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.
