CC = g++
CFLAGS = -W -Wall
TARGET = graph_exe
OBJECTS = DLinkedList.o ALGraph.o ALGraphMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o *exe
	

