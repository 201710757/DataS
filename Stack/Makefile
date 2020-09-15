CC = g++
CFLAGS = -W -Wall
TARGET = Stack_exe
OBJECTS = ListBaseStack.o ListBaseStackMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

