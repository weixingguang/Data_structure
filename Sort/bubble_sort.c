#include <stdio.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE+1];
	int length;
} SqList;

void swap(SqList *L, int i, int j);
void bubble_sort(SqList *L);

void main()
{
}

void bubble_sort(SqList *L)
{
	int i, j;
	for(i = 1; i < L->length; i++)
	{
	}
}

void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

