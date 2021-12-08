#include <stdio.h>
int main04() {
	char ch = 'A';
	printf("%c\n",ch);
	printf("%hd\n",ch);
	printf("%d\n",ch);


	return 0;
}

int main05(void) {
	char ch;
	scanf("%c",&ch);
	ch = ch - 32;
	printf("%c\n",ch);
	return 0;


}