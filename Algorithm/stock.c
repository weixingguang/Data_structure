/*
题目描述
									
有股神吗？
有，小赛就是！
经过严密的计算，小赛买了一支股票，他知道从他买股票的那天开始，股票会有以下变化：第一天不变，以后涨一天，跌一天，涨两天，跌一天，涨三天，跌一天...依此类推。
为方便计算，假设每次涨和跌皆为1，股票初始单价也为1，请计算买股票的第n天每股股票值多少钱？
*/
#include <stdio.h>
#include <math.h>


int calculate_stock(int n)
{
	int mid = sqrt(2*n);
	int sum0 = mid*(mid+1)/2;

	if( n < sum0 )
		mid--;


	int money = 1 + (mid-2)*(mid-1)/2;
	sum0 =  mid*(mid+1)/2;
	int gap = n - sum0;

	money = money + gap;

	return money;
}


int main()
{
	int n;

	scanf("%d", &n);

	printf("%d\n", calculate_stock(n) );

	return 0;
}
