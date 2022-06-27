# MCU name
MCU = STM32F401

# Bootloader selection
<<<<<<< HEAD
BOOTLOADER = stm32-dfu
=======
BOOTLOADER = tinyuf2
#BOOTLOADER = stm32-dfu
MCU_LDSCRIPT = STM32F401xE
EEPROM_DRIVER = vendor
>>>>>>> playground_new

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = usart
ENCODER_ENABLE = yes        # Enable encoder

LAYOUTS = ortho_5x12

