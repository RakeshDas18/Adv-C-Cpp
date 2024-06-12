//Sum of two numbers using pointer

#include<stdio.h>

int main(){
	int m, n, *p, *q, sum;
	printf("Enter a number: \n");
	scanf("%d", &m);
	printf("Enter another number: \n");
	scanf("%d", &n);
	p = &m;
	q = &n;
	sum = *p + *q;
	printf("Sum of entered number is %d", sum);
	
	return 0;
}
