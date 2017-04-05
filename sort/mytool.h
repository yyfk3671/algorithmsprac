#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
void printAry(const int *p, int size)
{
		int i;
		for(i=0; i < size; i++)
		{
				printf("%d ", p[i]);
		}
		printf("\n");
}
