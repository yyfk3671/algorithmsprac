#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
#include "../myheader.h"
#include "../mytool.h"

int bubblesort(int *, int);

int main(int argc, char **argv) {
  int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1 ,0};
  int size;
  GetSizeOfArray(array, size);
  printf("before sort:\n\t");
  printAry(array, size);
  bubblesort(array, size);
  printf("after sort:\n\t");
  printAry(array, size);
  return 0;
}

int bubblesort(int *p, int size) {
      int i;
      int tmp;
      for(i = 0; i < size; i++) {
          int j;
         for(j = 1; j < size - i; j++) {
             if(p[j] < p[j-1]) {
                 tmp = p[j];
                 p[j] = p[j-1];
                  p[j-1] = tmp;
                  printf("sort: ");
                  printAry(p, size);
              }
          }
     }
}
