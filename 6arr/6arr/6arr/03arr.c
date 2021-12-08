/*#include <stdio.h>
int main06(void)
{
	int arr[10] = {9,3,2,1,5,4,6,8,7,0};
	int i,j;
	int temp;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}*/