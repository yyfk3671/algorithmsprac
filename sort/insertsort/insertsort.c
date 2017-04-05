#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
#include "../myheader.h"
#include "../mytool.h"

void insertsort(int*, int);

int main(int argc, char **argv)
{
		int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1 ,0};
		int size;
		GetSizeOfArray(array, size);
		printf("before sort:\n\t");
		printAry(array, size);
		insertsort(array, size);
		printf("after sort:\n\t");
		printAry(array, size);
		return 0;
}

void insertsort(int *p, int size)
{
		int i;
		int temp;
		for(i = 1; i < size; i++)
		{
				int j = i;
				temp = p[i];
				while(j > 0 && temp < p[j-1]) {
					p[j] = p[j-1];
					printf("swith: ");
					printAry(p, size);
					j--;
				}
				p[j] = temp;
				printAry(p, size);
				printf("\n");

		}

}
