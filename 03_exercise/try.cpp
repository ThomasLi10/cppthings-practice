#include <iostream>

using namespace std;

void fun(int x) {
    try {
        if (x == 0)
            throw "异常";
    } catch (...) {
        cout << "in func" << endl; 
        throw 1;
    }
}

int main() {
    try {
        fun(0); 
    } catch (int n) {
        cout << "in main" << endl;
    }
}
