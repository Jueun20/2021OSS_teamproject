CC = gcc
CFLAGS = -W -Wall
TARGET = item

OBJECTS = main.c CRUD.o manager.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
        $(CC) $(CFLAGS) -o $@ $^

clean :
        rm *.o item
        rm *.txt
