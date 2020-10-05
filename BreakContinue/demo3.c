#include <stdio.h>

int main(){
	int i, sum = 0;

	for (int i = 0; i <= 20; ++i)	{
		if (i%2==1)		{
			continue;
		}
		else{
			sum = sum + i;
		}
	}
	printf("The sum of all even numbers form 0 to 20: %d\n", sum);

}