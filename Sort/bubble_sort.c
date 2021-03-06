#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE+1];
	int length;
} SqList;

void swap(SqList *L, int i, int j);
void bubble_sort0(SqList *L);
void bubble_sort1(SqList *L);
void bubble_sort2(SqList *L);

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

	bubble_sort2(sl);

	for(i = 0; i < sl->length; i++)
		printf("%d ", sl->r[i]);
	printf("\n");

}

void bubble_sort2(SqList *L)
{
	int i, j;

	int sort_flag = 1;

	for(i = 1; (i < L->length) && sort_flag; i++)
	{
		sort_flag = 0;

		for(j = L->length - 1; j > i; j--)
		{
			if( L->r[j] < L->r[j-1])
			{
				swap(L, j, j-1);
				sort_flag = 1;
			}
		}
	}
}

void bubble_sort1(SqList *L)
{
	int i, j;
	for(i = 1; i < L->length; i++)
	{
		for(j = L->length - 1; j > i; j--)
		{
			if(L->r[j] < L->r[j-1])
			{
				swap(L, j, j-1);
			}
		}
	}
}

void bubble_sort0(SqList *L)
{
	int i, j;
	for(i = 1; i < L->length; i++)
	{
		for(j = i + 1; j < L->length; j++)
		{
			if(L->r[i] > L->r[j])
			{
				swap(L, i, j);
			}
		}
	}
}

void swap(SqList *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

