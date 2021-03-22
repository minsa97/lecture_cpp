CC=g++
OBJS=ComplexClassTest2.o Complex.o
CFLAGS=-W -Wall
TARGET=ComplexClassTest2.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)