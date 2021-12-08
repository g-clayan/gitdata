#include <stdio.h>
int main02(void) {
	int a;
	scanf("%d",&a);
	switch(a) {
	case 2:
		printf("输出选择的2 的值\n");
		break;
	case 34:
		printf("输出选择的34 的值\n");
		break;
	default:
		printf("未知");
		break;
	
	}
}