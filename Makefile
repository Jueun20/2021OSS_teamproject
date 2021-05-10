CC = gcc
CFLAGS = -W -Wall
TARGET = item
OBJECTS = main.o product.o manager.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
        $(CC) $(CFLAGS) -o $@ $^
clean :
	rm *.o item
