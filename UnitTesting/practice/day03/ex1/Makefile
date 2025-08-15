object.o : leapyear.c unity.c leap_test.c
	gcc $^ -c

all: leap_test.o leapyear.o unity.o
	gcc $^ -o $@

run: all
	./all

clean:
	rm -rf *.o all