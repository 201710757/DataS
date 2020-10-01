CC = g++
CFLAGS = -W -Wall
TARGET = UsefulHeap_exe
OBJECTS = UsefulHeap.o UsefulHeapMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

