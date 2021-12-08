#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int main11()
{
	int i, j, k;
	//时针
	for(i=0;i<=24;i++)
	{
		//分针
		for(j=0;j<=60;j++)
		{
			//秒针
			for(k=0;k<=60;k++)
			{
				printf("%d : %d : %d\n",i,j,k);
				Sleep(960);//系统延迟 Windows.h
				system("cls");//清屏操作stdlib.h
			}
		}
	}
	return 0;
}

int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d * %d = %d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;

}