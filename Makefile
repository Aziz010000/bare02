default:
	avr-gcc -c -w -Os -DF_CPU=16000000UL -mmcu=atmega328p es1.c -o es1.o
	avr-gcc es1.o -o es1.bin
	avr-objcopy -O ihex -R .eeprom es1.bin es1.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:es1.hex

