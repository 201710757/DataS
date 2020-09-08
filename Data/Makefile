CC = g++
CFLAGS = -W -Wall
TARGET = linkedList_exe
OBJECTS = DLinkedList.o main.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

