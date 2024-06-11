//Single Inheritance

#include<iostream>
using namespace std;

class A{
	int x;
	public:
		A(){
			x = 5;
		}
		void sqr(){
			cout << "Square = " <<x*x;
		}
};

class B: public A{
};

int main(){
	B b;
	b.sqr();
	
	return 0;
}
