CC=g++
OBJS=main.o MyString.o
CFLAGS=-W -Wall
TARGET=main.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)