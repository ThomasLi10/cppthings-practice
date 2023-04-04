#include <iostream>

using namespace std;

class Apple{
public:
    static void printMsg(){
        cout << "Welcome to Apple [static]!\n";
    }
    void printMsg2(){
        cout << "Welcome to Apple!\n";
    }
};

int main(){
    Apple::printMsg();
    Apple apple;
    apple.printMsg2();
}
