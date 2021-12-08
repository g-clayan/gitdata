#include <stdio.h>
int main01(void) {
	int a = 1;

	

	scanf("%d",&a);
	printf("十进制%d\n",a);
	printf("八进制%o\n",a);
	printf("十六进制%x\n",a);
	printf("十六进制%X\n",a);
	return 0;

}

int main03 (){
	unsigned int a = 11;
		printf("%u\n",a);
	return 0;

}

/*int main (void){
	short c = 10;
	long b = 20;
	//long long c = 30; c99

	printf("%hd\n",c);
	printf("%ld\n",b);
	return 0;
}*/