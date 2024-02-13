build:
	gcc -std=c99 -Wall ./lib/lua/src/*.c ./src/*.c -lSDL2 -o main -lm

clean:
	rm ./main

run:
	./main

