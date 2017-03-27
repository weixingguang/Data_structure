/*
	 兰博和提莫闲聊之后，回归到了他们的正题，约德尔人的未来。
	 说起约德尔人的未来，黑默丁格曾经提出了一个约德尔测试，将约德尔人的历史的每个阶段都用一个字符表达出来。(包括可写字符,不包括空格。)。然后将这个字符串转化为一个01串。转化规则是如果这个字符如果是字母或者数字，这个字符变为1,其它变为0。然后将这个01串和黑默丁格观测星空得到的01串做比较，得到一个相似率。相似率越高,则约德尔的未来越光明。
	 请问:相似率为多少？
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[1000] = {0};
	char data[1000] = {0};

	scanf("%s", str);
	scanf("%s", data);

	int same_length = 0;
	int str_len = strlen(str);

	int index = 0;
	while(index < str_len)
	{
		if( (str[index] >= 'a' && str[index] <= 'z' ) || (str[index] >= 'A' && str[index] <= 'Z') || (str[index] >= '0' && str[index] <= '9') )
		{
			if(data[index] == '1')
				same_length++;
		}
		index++;
	}

	printf("%0.2f%%", 100.0*same_length/str_len);
}
