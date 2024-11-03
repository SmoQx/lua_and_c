build:
	gcc -std=c99 -Wall ./lib/lua/src/*.c ./src/main.c -lSDL2 -o main -lm

clean:
	rm ./main

run:
	./main

