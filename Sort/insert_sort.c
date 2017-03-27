#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE+1];
	int length;
} SqList;

void swap(SqList *L, int i, int j);
void insert_sort0(SqList *L);

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

	insert_sort0(sl);

	for(i = 0; i < sl->length; i++)
		printf("%d ", sl->r[i]);
	printf("\n");

}

void insert_sort0(SqList* L)
{
	int i, j;
	for(i = 2; i < L->length; i++)
	{
		if(L->r[i] < L->r[i-1])
		{
			L->r[0] = L->r[i];
			for(j = i-1; L->r[j] > L->r[0]; j--)
			{
				L->r[j+1] = L->r[j];
			}

			L->r[j+1] = L->r[0];
		}
	}
}

void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

