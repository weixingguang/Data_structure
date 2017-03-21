#include <stdio.h>
#define ARR_SIZE 10

int binary_search1(int *a, int n, int key);
int binary_search2(int *a, int n, int key);

void main()
{
	int key = 5;

	int a[ARR_SIZE] = {0, 1, 3, 2, 4, 5, 6, 7, 8, 9};

	int index = binary_search1(a, ARR_SIZE, key);

	if(index > 0)
		printf("The %d has been find at index: %d \n", key, index);
	else if(index == 0)
		printf("The %d has not been found.\n", key);

	index = binary_search2(a, ARR_SIZE, key);

	if(index > 0)
		printf("The %d has been find at index: %d \n", key, index);
	else if(index == 0)
		printf("The %d has not been found.\n", key);
}

int binary_search1(int *a, int n, int key)
{
	int low, high, mid;
	low = 1;
	high = n-1;

	while(low <= high)
	{
		mid = (low + high) / 2;

		if(key < a[mid])
			high = mid - 1;
		else if (key > a[mid])
			low = mid + 1;
		else
			return mid;
	}

	return 0;

}

int binary_search2(int *a, int n, int key)
{
	int low, high, mid;
	low = 1;
	high = n-1;

	mid = low + (key - a[low]) * (high - low) / (a[high] - a[low]);

	while(low <= high)
	{
		if(key < a[mid])
			high = mid - 1;
		else if(key > a[mid])
			low = mid + 1;
		else
			return mid;
	}

	return 0;
}
