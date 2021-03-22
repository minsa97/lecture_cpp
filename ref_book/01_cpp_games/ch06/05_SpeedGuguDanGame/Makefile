CC=g++
OBJS=SpeedGuguClass.o
CFLAGS=-W -Wall
TARGET=SpeedGuguClass.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	del $(OBJS) $(TARGET)