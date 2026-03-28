CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pthread

TARGET = horse_race

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	del /Q $(TARGET).exe *.o 2>nul

run: $(TARGET)
	$(TARGET).exe