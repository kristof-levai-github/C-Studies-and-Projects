#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void read_int(int *x, int min, int max) {
  while (scanf("%d", x) != 1 || *x < min || *x > max) {
    printf("Invalid input, please enter a number between %d and %d: ", min, max);
    while (getchar() != '\n');
  }
}

int main(void) {
  int x;

  printf("Enter a number between 60 and 100: ");
  read_int(&x, 60, 100);
  printf("a szamod: %d", x);
  return 0;
}

