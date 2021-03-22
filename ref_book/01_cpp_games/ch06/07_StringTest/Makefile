CC=g++
OBJS=07_string_test.o
CFLAGS=-W -Wall
TARGET=07_string_test.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)