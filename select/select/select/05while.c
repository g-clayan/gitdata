/*#include <stdio.h>
#include <math.h>
int main05(void) {
	int i = 0;
	while(i <= 10){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
int main06(void){
	int i = 0;
	int sum = 0;
	while(i <= 100){
		sum += i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}

int main07(void){
	int i = 100;
	int a, b, c;

	while(i <= 999){
		a = i/100;
		b = i/10%10;
		c = i%10;
		if(a*a*a + b*b*b + c*c*c == i){
		printf("水仙花数：%d\n",i);
		}
		i++;
	}
	return 0;
}

int main08(void){
	int i = 100;
	int a, b, c;
	do{
		a = i/100;
		b = i/10%10;
		c = i%10;
		if(pow(a,3) + b*b*b + c*c*c == i){
		printf("水仙花数：%d\n",i);
		}
		i++;	
	}while(i <= 999);
	return 0;
}*/