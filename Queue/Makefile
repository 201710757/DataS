CC = g++
CFLAGS = -W -Wall
TARGET = ListQueue_exe
OBJECTS = CircularQueue.o CircularQueueMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

