linkedList: node.o main.o
	gcc -o linkedList node.o main.o

node.o: node.c node.h
	gcc -c node.c

main.o: main.c node.h
	gcc -c main.c

run: all
	./linkedList

clean:
	rm *.o
