//Call by value

#include<stdio.h>

void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int x = 10;
	int y = 20;
	swap(x, y);
	printf("In call by values: \nX = %d\nY = %d", x, y);
	
	return 0;
}
