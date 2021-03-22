CC=g++
OBJS=ComplexClassTest4.o
CFLAGS=-W -Wall
TARGET=ComplexClassTest4.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)