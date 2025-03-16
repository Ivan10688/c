#include <stdio.h>
#include <stdlib.h>

int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

int main(){
	int base, n;
	printf("input base n= \n");
	scanf("%d %d",&base, &n);
	printf("power(%d,%d)=%d\n",base,n, power(base,n));
}
