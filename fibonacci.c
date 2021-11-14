#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c,num;
	a=0;
	b=1;
	
	printf("Enter number: ");
	scanf("%d" , &num);
	
	printf("%d %d " , a,b);
	
	for(int i=1;i<=num-2;i++){
		
		c = a + b;
		a = b;
		b = c;
		
		printf("%d " , c);
	}

	
	return 0;
}
