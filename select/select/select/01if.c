#include <stdio.h>
int main01(void) {
	int score;
	scanf("%d",&score);
	if(score > 700) {
		printf("清华\n");
	}else if(score > 600){
		printf("电大\n");
	}else{
		printf("农大\n");
	}
	return 0;
}