
MCU = atmega128
F_CPU = 1000000UL
CC = avr-gcc
OBJCOPY = avr-objcopy
CFLAGS = -Wall -gdwarf-2 -fsigned-char -MD -MP -DF_CPU=$(F_CPU) -O1 -mmcu=$(MCU)
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
TARGET = main.elf
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET) *.d

flash: $(TARGET)
	# Use avr-dude or similar to upload; customize for your programmer
	# avrdude -p m128 -c usbasp -U flash:w:$(TARGET):e

.PHONY: all clean flash
