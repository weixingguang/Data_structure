/*
一个公交车经过n个站点，乘客从前门上车，从后门下车。
现在统计了在第i个站，下车人数a[i]，以及上车人数b[i]。
问公交车运行时候车上最多有多少乘客

 */

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a, b;

	int i;
	int max_num = 0;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		sum = sum + b - a;

		if(max_num < sum)
			max_num = sum;
	}

	printf("%d\n", max_num);
}
