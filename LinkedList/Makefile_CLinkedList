CC = g++
CFLAGS = -W -Wall
TARGET = linkedList_exe
OBJECTS = CLinkedList.o main_CLinkedList.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

