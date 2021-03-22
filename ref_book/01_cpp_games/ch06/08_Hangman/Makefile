CC=g++
OBJS=08_HangmanGame.o
CFLAGS=-W -Wall
TARGET=08_HangmanGame.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)