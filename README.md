# Liquid Crystal Simplified Library for Arduino
---

This library allows an Arduino board to control LiquidCrystal displays (LCDs) based on the Hitachi HD44780 (or a compatible) chipset, which is found on most text-based LCDs.

> Unlike regular Liquid Crystal library, this library supports button reading functionality.

For more information about this library please visit us at
http://www.arduino.cc/en/Reference/LiquidCrystal

### New Functions
```c
// analog_pin on TinkerTech model LCDs are at pin 0, adjust if necessary
  int read_LCD_buttons(int analog_pin = 0);

  /*
   * prints which button was pressed to LCD display at (0,0)
   * by default LCD display stays empty unless lcd_print = true
   * if exclude_none = true and lcd_print = true,
   * LCD displays last pressed value
   * if serial_print is true, also prints button pressed to serial_print
   */
   int print_button_pressed(int lcd_key = btnNONE, bool lcd_print = false,
     bool serial_print = false, bool exclude_none = false);
```

### License
Copyright (C) 2006-2008 Hans-Christoph Steiner. All rights reserved.
Copyright (c) 2010 Arduino LLC. All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
