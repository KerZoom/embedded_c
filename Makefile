CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
INCLUDES = -Iinclude
SRC = src/main.c src/counter.c
OUT = build/app
DEBUG = break main

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)

debug:
	gdb $(OUT)