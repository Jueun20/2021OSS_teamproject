item : main.c CRUD.o manager.o
	gcc -o item main.c CRUD.o manager.o
CRUD.o : CRUD.c item.h
	gcc -c CRUD.c
manager.o : manager.c item.h
	gcc -c manager.c
clean :
	rm *.o item
