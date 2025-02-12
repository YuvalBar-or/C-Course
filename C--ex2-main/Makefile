CC=gcc
AR=ar
FLAGS= -Wall -g

all: matlib.a connections 
clean: 
	rm -f *.o *.a connections 

connections: main.o matlib.a
	$(CC) $(FALGS) -o connections main.o matlib.a

matlib.a: my_mat.o
	$(AR) -rcs matlib.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c


