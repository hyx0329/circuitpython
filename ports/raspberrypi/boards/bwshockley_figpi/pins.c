#include "shared-bindings/board/__init__.h"

CIRCUITPY_BOARD_BUS_SINGLETON(stemma_i2c, i2c, 1)

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO29) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO29) },

    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO28) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_GPIO28) },

    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO27) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_GPIO27) },

    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO26) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_GPIO26) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_GPIO16) },

    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO17) },

    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO24) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO24) },

    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO25) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO25) },

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO6) },

    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO4) },

    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_GPIO7) },

    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_GPIO5) },

    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO0) },

    { MP_ROM_QSTR(MP_QSTR_BUTTON), MP_ROM_PTR(&pin_GPIO20) },

    { MP_ROM_QSTR(MP_QSTR_SDA1), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_SCL1), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_D19), MP_ROM_PTR(&pin_GPIO19) },

    { MP_ROM_QSTR(MP_QSTR_I2C0), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C0), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },

    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C1), MP_ROM_PTR(&board_stemma_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_I2C1), MP_ROM_PTR(&board_stemma_i2c_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
