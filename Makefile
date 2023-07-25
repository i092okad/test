CC := gcc

main:main.c
  $(CC) -Wall -O -o main main.c -lm

clean:
  rm main *~
