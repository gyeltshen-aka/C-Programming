#include <stdio.h>
#include  <math.h>

int main(){
	int r, l, h, s, a, b, s, area;
	float pi = 3.14;

	int option;

	printf("\n1.Area of circle");
	printf("\n2.Area of triangle");
	printf("\n3.Area of rectangle");

	printf("Enter the choice: ");
	scanf("%d", &option);

	switch(option){
	case 1:{
		printf("Enter the radius of the circle: ");
		scanf("%d", &r);
		area = 2* pi * r;
		printf("%d\n", area);
		break;
	}
	case 2:{
		printf("Enter the first side: ");
		scanf("%d", &a);
		printf("Enter the first side: ");
		scanf("%d", &b);
		printf("Enter the first side: ");
		scanf("%d", &c);
		s = (a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("%d\n", area);
		break;
	}
	case 3:{
		printf("Enter the length: ");
		scanf("%d", &l);
		printf("Enter the height: ");
		scanf("%d", &h);
		area = l*h;
		printf("%d\n", area);
		break;
	}
	default:
		printf("\nInvalid operation");
		break;
	}	
	return 0;
	
}