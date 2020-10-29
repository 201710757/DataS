CC = g++
CFLAGS = -W -Wall
TARGET = sort_exe
OBJECTS = RadixSort.o 

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

