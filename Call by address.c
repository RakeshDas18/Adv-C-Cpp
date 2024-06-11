//Call by address

#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x = 10;
	int y = 20;
	printf("Before swapping: X = %d, Y = %d\n", x, y);
	swap(&x, &y);
	printf("After swapping: X = %d, Y = %d", x, y);
	
	return 0;
}
