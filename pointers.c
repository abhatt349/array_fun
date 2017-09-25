#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int arr[10];
  int i;
  for (i = 0; i < 10; i++) {
    arr[i] = rand();
  }
  arr[9] = 0;
  printf("original array\n");
  for (i = 0; i < 10; i++) {
    printf("arr[%d]: %d\n", i, arr[i]);
  }
  int backwards[10];
  for (i = 0; i < 10; i++) {
    *(backwards + i) = *(&arr[9-i]);
  }
  printf("backwards array\n");
  for (i = 0; i < 10; i++) {
    printf("backwards[%d]: %d\n", i, backwards[i]);
  }
}
