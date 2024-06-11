//Inline function reduces overhead of execution of a program

#include<iostream>
using namespace std;
inline int add(int a, int b){
	return a+b;
}

int main(){
	int x = 10;
	int y = 20;
	int z;
	z = add(x, y);
	cout << z;
	
	return 0;
}
