//Swap using pointer

#include<iostream>
using namespace std;

int main(){
	int a, b, c, *p, *q;
	cout << "Enter a number: \n";
	cin >> a;
	cout << "Enter another number: \n";
	cin >> b;
	p = &a;
	q = &b;
	c = *p;
	*p = *q;
	*q = c;
	cout << "After swapping a = " << a;
	cout << "\nAfter swapping b = " << b;
	return 0;
}
