all: 	*.o
		gcc -o main.exe *.o

clean: *.o *.exe
	  rm *.o *.exe

object_files: *.c
	gcc -o *.c
