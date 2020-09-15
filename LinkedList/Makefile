CC = g++
CFLAGS = -W -Wall
TARGET = custom_linkedList_exe
OBJECTS = CLinkedList.o employeeMain.o 

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

