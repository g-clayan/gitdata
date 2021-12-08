/*#include <stdio.h>
int main07(void)
{
	int i,j;
	int arr[4][3] =
	{
		{32,32,45},
		{32,69,45},
		{32,70,45},
		{32,80,45}
	};

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main08(void)
{
	int sum = 0;
	int i,j;
	int arr[4][3] =
	{
		{32,32,45},
		{32,69,45},
		{32,70,45},
		{32,80,45}
	};

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			sum += arr[i][j];
		}
		printf("第%d名学生: %d\n",i+1,sum);
		sum = 0;
	}

	sum = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum += arr[j][i];
			
		}
		printf("第%d门功课：%d\n",i+1,sum);
			sum = 0;
	}
	return 0;
}*/
