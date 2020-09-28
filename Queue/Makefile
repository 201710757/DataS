CC = g++
CFLAGS = -W -Wall
TARGET = Deque_exe
OBJECTS = Deque.o DequeMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

