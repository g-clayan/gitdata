#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int main11()
{
	int i, j, k;
	//ʱ��
	for(i=0;i<=24;i++)
	{
		//����
		for(j=0;j<=60;j++)
		{
			//����
			for(k=0;k<=60;k++)
			{
				printf("%d : %d : %d\n",i,j,k);
				Sleep(960);//ϵͳ�ӳ� Windows.h
				system("cls");//��������stdlib.h
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