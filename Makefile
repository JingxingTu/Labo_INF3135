CFLAGS = -Wall -pedantic -std=c99

default: hello
.PHONY:clean

hello: 
	gcc $(CFLAGS) hello.c -o hello
	
clean:
	rm -rf hello
