CC := gcc
CFLAGS := -Wall -O
LIBS := -lm

main: main.c
        $(CC) $(CFLAGS) -o main main.c $(LIBS)

clean:
        rm main *~
