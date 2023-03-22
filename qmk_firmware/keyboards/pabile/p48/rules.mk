MCU = RP2040
BOOTLOADER = rp2040

BOOTMAGIC_ENABLE = yes        # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes         # Mouse keys
EXTRAKEY_ENABLE = yes         # Audio control and System control
CONSOLE_ENABLE = no           # Console for debug
COMMAND_ENABLE = no           # Commands for debug and configuration
SLEEP_LED_ENABLE = no         # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes             # USB Nkey Rollover
BACKLIGHT_ENABLE = no         # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no          # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no         # Enable Bluetooth
AUDIO_ENABLE = no             # Audio output
ENCODER_ENABLE = no 
IOS_DEVICE_ENABLE = yes

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = vendor
