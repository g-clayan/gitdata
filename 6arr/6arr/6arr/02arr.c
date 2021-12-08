#include <stdio.h>

/*#define SIZE 10
int main03(void)
{
	int size;
	scanf("%d",&size);
	int arr[SIZE];
	arr[3] = 60;
	printf("%d\n",arr[3]);
	return 0;
}*/
int main04(void)
{
	int arr[5];
	int i, j;
	int temp = 0;

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		/*原因：
		\n在scanf格式串中不表示等待换行符，而是读取并放弃连续的空白字符。（事实上，scanf格式串中的任何空白字符都表示读取并放弃空白字		符。而且，诸如%d这样的格式也会丢掉前边的空白，因此你通常根本不需要在scanf格式串中加入显式的空白。）
		 因此，“%d\n”中的\n会让scanf读取到非空白字符串为止，而它可能需要读到下一行才能找到这个非空白字符串。这种情况下，去掉\n仅仅使		用“%d”即可（但你的程序可能需要跳过那个没有读入的换行符。）
		参考：《你必须找到的495个C语言问题》*/
	}

	for(j=0;j<5;j++)
	{
		if(temp < arr[j])
		{
			temp = arr[j];
		}
		
	}
	printf("最大：%d\n",temp);
	return 0;
}

