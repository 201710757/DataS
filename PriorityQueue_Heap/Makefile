CC = g++
CFLAGS = -W -Wall
TARGET = Priority_Queue_exe
OBJECTS = PriorityQueue.o PriorityQueueMain.o UsefulHeap.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

