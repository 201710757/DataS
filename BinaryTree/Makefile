CC = g++
CFLAGS = -W -Wall
TARGET = BTree_exe
OBJECTS = BinaryTree.o BinaryTreeMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

