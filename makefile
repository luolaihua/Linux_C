.PHONY:all

all: hello main

OBJ_hello = Hello.o f1.o
OBJ_main = main.o
hello: $(OBJ_hello)
	gcc $(OBJ_hello) -o hello

main:$(OBJ_main)
	gcc $(OBJ_main) -o main


.PHONY:clean
	
clean:
	rm *.o main hello
