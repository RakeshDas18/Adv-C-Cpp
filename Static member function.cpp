//Static member function can access both static and non static member data but a static
//member function can access only static member data

#include<iostream>
using namespace std;

class myClass{
	private:
		static int staticData;
		int nonStaticData;
	public:
		myClass(int data):nonStaticData(data){}
		static void staticFuncAccessingAll(){
			cout << "Static member function accessing static data: " << staticData << endl;
		}
		static void staticFuncAccessingStatic(){
			cout << "Static member function accessing static data: " << staticData << endl;
		}
};

int myClass::staticData = 100;

int main(){
	
	myClass obj(50);
	cout << "Calling static function accessing all member data: " << endl;
	myClass::staticFuncAccessingAll();
	cout<<"Calling static function accessing only static member: " <<endl;
	myClass::staticFuncAccessingStatic();
	
	return 0;
}
