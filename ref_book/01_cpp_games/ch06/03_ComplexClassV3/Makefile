CC=g++
OBJS=ComplexClassTest3.o
CFLAGS=-W -Wall
TARGET=ComplexClassTest3.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)