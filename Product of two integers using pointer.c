//Multiplication using pointer

#include<stdio.h>

int main(){
	int m, n, *p, *q, product;
	printf("Enter a number: \n");
	scanf("%d", &m);
	printf("Enter another number: \n");
	scanf("%d", &n);
	p = &m;
	q = &n;
	product = *p * *q;
	printf("Product of entered number is %d", product);
	
	return 0;
}
