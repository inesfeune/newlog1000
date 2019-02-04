
# default command, builds an executable called "newton".
# executable can be called with ./newton 49 4
all: newton

# link the object files into the executable.
# the -lm option is to tell the linker to include math libraries.
newton: main.o newton.o
	gcc -o newton main.o newton.o -lm

# compile the main.c file into the main.o object file.
main.o: main.c newton.h
	gcc -o main.o -c main.c

# compile the newton.c file into the newton.o object file.
newton.o: newton.c newton.h
	gcc -o newton.o -c newton.c

# remove the executable and intermediary object files.
clean:
	rm -rf newton main.o newton.o

