#include <stdio.h>
int main01(void) {
	int score;
	scanf("%d",&score);
	if(score > 700) {
		printf("�廪\n");
	}else if(score > 600){
		printf("���\n");
	}else{
		printf("ũ��\n");
	}
	return 0;
}