// Question 5

#include <stdio.h>

int main(){
	char x;
	
	printf("Lets check one word: ");
	scanf("%s ", &x);
	
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
		printf("It is vowel\n");
	}
	else if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
		printf("It is vowel\n");
	}
	else{
		printf("It is not a vowel\n");
	}
	return 0;
}