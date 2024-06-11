//Template function

#include<iostream>
using namespace std;

template <typename T>
class rectangle {
	T l, b;
	public:
		rectangle(T n1, T n2){
			l = n1;
			b = n2;
		}
		void area(){
			cout << "Area: " << l*b << endl;
		}
};

int main(){
	int x = 10, y = 20;
	rectangle<int> obj(x, y);
	obj.area();
	float f1 = 5.5, f2 = 9.7;
	rectangle<float> obj2(f1, f2);
	obj2.area();
	
	return 0;
	
	return 0;
}
