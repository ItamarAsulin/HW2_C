CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_MAT=my_mat.o
FLAGS= -Wall -g



all: myMatLib connections

myMatLib: my_mat.a

connections: main.o my_mat.a
	$(CC) $(FLAGS) -o connections main.o my_mat.a

my_mat.a: my_mat.o
	$(AR) -rcs my_mat.a my_mat.o

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c
	$(CC) $(FLAGS) -c main.c



clean:
	rm -f *.o *.a connections
