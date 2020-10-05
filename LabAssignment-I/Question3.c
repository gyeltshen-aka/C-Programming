// Question 3

#include <stdio.h>

int main(){
	int x;
	int y;
	
	printf("Enter the first number: ");
	scanf ("%d", &x);
	
	printf("Enter the second number: ");
	scanf ("%d", &y);
	
	int add = (float)x + (float)y;
	int sub = (float)x - (float)y;
	int multi = (float)x * (float)y;
	float div = (float)x / (float)y;
	int modu = (float)(x%y);
	
	printf("The sum is: %d\n", add);
	printf("The difference is: %d\n", sub);
	printf("The product is: %d\n", multi);
	printf("The quotioent is: %f\n", div);
	printf("The modulo is: %d\n", modu);
	return 0;
}