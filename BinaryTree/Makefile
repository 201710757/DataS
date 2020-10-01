CC = g++
CFLAGS = -W -Wall
TARGET = BinaryTree_exe
OBJECTS = BinaryTree.o BinaryTreeMain.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
	

