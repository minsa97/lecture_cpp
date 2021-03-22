CC=g++
OBJS=ComplexClassTest1.o Complex.o
CFLAGS=-W -Wall
TARGET=ComplexClassTest1.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)