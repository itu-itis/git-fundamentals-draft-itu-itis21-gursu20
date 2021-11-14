#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char name[50];
	printf("Enter your university's name: ");
	scanf("%s" , name);
	
	printf("Your university name is %s\nCongratulations!" , name);
	printf("You are a great student\n");
	printf("Be happy with that!");
	
	return 0;
}
