#include <stdio.h>

int main(){
	int N, i, a, b, c;
	printf("Number for Fibonacci series: ");
	scanf("%d", &N);

	i=1;
	a=0;
	b=1;

	while(i<=N){
		printf("%d\n", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	return 0;
}