#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	char ch1[]="hello world";
	char ch2[]="hello world";
	int i=0;
	while(ch1[i]==ch2[i])
	{
		if(ch1[i]=='\0')
		{
			printf("����������ͬ\n");
			return 0;
		}
		i++;
	}
	printf("�������鲻��ͬ\n");
	return 0;
}