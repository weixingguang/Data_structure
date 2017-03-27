#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE+1];
	int length;
} SqList;

void swap(SqList *L, int i, int j);
void select_sort0(SqList *L);

void main()
{
	SqList *sl = (SqList*) malloc(sizeof(SqList));
	sl->length = MAXSIZE+1;
	sl->r[0] = 0;

	int i;
	for(i = 1; i < sl->length; i++)
		sl->r[i] = MAXSIZE - i;

	for(i = 0; i < sl->length; i++)
		printf("%d ", sl->r[i]);
	printf("\n");

	select_sort0(sl);

	for(i = 0; i < sl->length; i++)
		printf("%d ", sl->r[i]);
	printf("\n");

}

void select_sort0(SqList *L)
{
	int i, j, min;

	for(i = 1; i < L->length; i++)
	{
		min = i;
		for(j = i + 1; j < L->length; j++)
		{
			if(L->r[min] > L->r[j])
				min = j;
		}

		if(i != min)
			swap(L, i, min);
	}
}


void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

