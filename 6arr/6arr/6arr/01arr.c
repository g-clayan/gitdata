#include <stdio.h>
int main01(void)
{
	int arr[10];
	arr[0] = 123;
	arr[1] = 125;
	arr[2] = 126;
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);

}
int main02(void)
{
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int arr[10] = {1,2,3,4,5,6};
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

