//File handling

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream myFile;
	myFile.open("File.txt", ios::out);
	if(!myFile){
		cout << "File not created!!!";
	} else {
		cout << "File created successfully!!!";
		myFile << "Assam Engineering Institute";
		myFile.close();
	}
	
	return 0;
}
