#include <stdio.h>
#include "myheader.h"

void QuickSort(int *, int, int);
void printAry(const int *, int);

/*
 *main
 */
int main(int argc, char **argv)
{
		int a[10] = {13,23,24,10,45,56,1,5,39,47};
		int len;
		GetSizeOfArray(a, len)
		printf("数组长度为: %d\n", len);
		printf("before sorted:\n\t");
		printAry(a, 10);
		QuickSort(a, 0, 9);
		printf("after sorted:\n\t");
		printAry(a, 10);
		return 0;
}

/*
 * @param p 数组首地址
 * @param left 左索引
 * @param right 右索引
 */
void QuickSort(int * p, int left, int right)
{
		if(left >= right)
		{
				return;
		}
		int i = left;
		int j = right;
		int key = p[left];

		while(i < j)
		{
				while(i < j && key <= p[j])
				{
						j--;
				}

				p[i] = p[j];

				while(i < j && key >= p[i])
				{
						i++;
				}

				p[j] = p[i];
		}

		p[i] = key;
		QuickSort(p, left, i -1);
		QuickSort(p, i + 1, right);
}

void printAry(const int *p, int size)
{
		int i;
		for(i=0; i < size; i++)
		{
				printf("%d ", p[i]);
		}
		printf("\n");
}
