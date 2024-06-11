//Unary operator

#include<iostream>
using namespace std;

class opOverloading {
    int num;
public:
    opOverloading() {
        num = 23;
    }
    void operator++() {
        cout << ++num << endl;
    }
    void operator++(int) {
        cout << num++ << endl;
    }
};

int main() {
    opOverloading o;
    ++o;
    o++;

    return 0;
}

