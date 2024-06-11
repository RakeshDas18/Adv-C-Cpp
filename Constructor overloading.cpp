//Constructor overloading in C++

#include<iostream>
using namespace std;

class A{
	int a, b;
	public:
		A(){
			a = 10;
			b = 20;
		}
		A(int x, int y){
			a = x;
			b = y;
		}
		void add(){
			cout << "Sum = " << a + b << endl;
		}
};

int main(){
	
	A o;
	o.add();
	
	A o1(100, 200);
	o1.add();
	
	return 0;
}
