// Question4

#include <stdio.h>

int main(){
	float a;
	
	printf("Enter your maths CA(out of 60):");
	scanf("%f", &a);
	
	float b;
	
	printf("Enter your maths SE(out of 40):");
	scanf("%f", &b);
	if (a >= 24 && b >= 16){
		float total = a + b;
		if (total >= 50){
			printf("You have passed in Maths and your marks is: %f\n", total);
		}
		else{
			printf("You have failed in Math\n");
		}
	}
	else{
		if (a < 24){
		printf("You have failed in CA\n");
		}
	else{
		printf("You have failed in SE\n");
	}
	}
	return 0;
}