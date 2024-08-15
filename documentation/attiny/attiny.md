## Attiny

### Layout

![](documentation/attiny/digispark_layout.png)

![](documentation/attiny/digispark_microusb_layout.webp)

![](documentation/attiny/tinyX5_pinout.jpeg)

### Programming

**Bootloader**

- [midronucleos bootloader](https://github.com/micronucleus/micronucleus)

**platformio.ini**

```
#Attiny 85 programmed by Arduino Uno as ISP
[env:attiny85]
platform = atmelavr
board = attiny85
;Clock frequency
board_build.f_cpu = 1000000L

framework = arduino
upload_protocol = stk500v1
; each flag in a new line
upload_flags =
     -P$UPLOAD_PORT
     -b$UPLOAD_SPEED

; edit these lines
upload_port = /dev/ttyUSB0
upload_speed = 19200
```

### Links

- [library for arduino ide](https://github.com/SpenceKonde/ATTinyCore)
-