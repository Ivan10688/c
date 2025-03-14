#include <stdio.h>

/* print Fahrenheit-Celsius table*/
int main() {
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}
}

/*
int main(){
	int a = 45;
	int b = 65;
	int c = 456+654;
	printf("%d + %d = %d\n", a, b, a+b);
	printf("c = %d\n", c);
	printf("c -b + a = %d\n", c -b +a);
}
*/
