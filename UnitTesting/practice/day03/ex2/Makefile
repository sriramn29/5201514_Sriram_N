all: test.o main.o unity.o def.o
	gcc $^ -o all

test.o: test.c
	gcc -c test.c

main.o: main.c
	gcc -c main.c

unity.o: unity.c
	gcc -c unity.c

def.o: def.c
	gcc -c def.c

run: all
	./all

clean:
	rm -rf *.o all
