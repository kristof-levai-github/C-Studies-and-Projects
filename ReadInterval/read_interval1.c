#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void read_int(int *x) {
  while (scanf("%d", x) != 1) {
    printf("Invalid input!\n");
    while (getchar() != '\n');
  }
}

int main(void) {
  
  int x;
  printf("Adj meg egy szamot ");
  read_int(&x);
  printf("Az altalad megadott szam: %d", x);
  return 0;
  
}