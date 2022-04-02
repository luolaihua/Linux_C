main: Hello.o f1.o
	gcc Hello.o f1.o -o main

.PHONY:clean
	
clean:
	rm *.o main
