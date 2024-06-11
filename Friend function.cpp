//Friend function

#include<iostream>
using namespace std;
class rectangle{
	int l, b;
	public:
		rectangle(){
			l = 10;
			b = 20;
		}
		friend void area(rectangle obj);
};

void area(rectangle obj){
	cout << "Area = " << obj.l * obj.b << endl;
}

int main(){
	rectangle obj;
	area(obj);
	
	return 0;
}
