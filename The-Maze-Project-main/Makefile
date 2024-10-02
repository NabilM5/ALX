CFLAGS = -I/opt/homebrew/include/SDL2
LDFLAGS = -L/opt/homebrew/lib -lSDL2

build:
	gcc -Wall -Werror -Wextra -pedantic ./src/*.c $(CFLAGS) $(LDFLAGS) -lm -o maze

run:
	./maze

clean:
	rm -f maze
