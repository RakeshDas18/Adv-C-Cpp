//Call by value

#include<stdio.h>

int main(){
	int x = 10;
	int y = 20;
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("In call by values: \nX = %d\nY = %d", x, y);
	
	return 0;
}
