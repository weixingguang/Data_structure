#include <stdio.h>
#define ARR_SIZE 10

int sequential_search1(int *a, int n, int key);
int sequential_search2(int *a, int n, int key);
void main()
{
	int key = 5;

	int a[ARR_SIZE] = {0, 1, 3, 4, 2, 5, 6, 7, 8, 9};


	int index = sequential_search1(a, ARR_SIZE, key);

	if(index > 0)
		printf("The %d has been find at index: %d \n", key, index);
	else if(index == 0)
		printf("The %d has not been found.\n", key);

	index = sequential_search2(a, ARR_SIZE, key);
	if(index > 0)
		printf("The %d has been find at index: %d \n", key, index);
	else if(index == 0)
		printf("The %d has not been found.\n", key);
}

int sequential_search1(int *a, int n, int key)
{
	int i;
	for(i = 1; i < n; i++)
	{
		if( a[i] == key)
			return i; // Find the key
	}

	return 0; // Do ont find the key
}

int sequential_search2(int *a, int n, int key)
{
	int i;
	a[0] = key;
	i = n;
	while(a[i] != key)
	{
		i--;
	}

	return i; // i > 0 : find the key; i == 0 : do not find the key
}
