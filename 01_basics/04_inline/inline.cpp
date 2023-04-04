#include <iostream>
#include "inline.h"

using namespace std;

int Foo(int x, int y);
inline int Foo(int x, int y){
    return x + y;
}

inline void A::f1(int x){
}

int main(){
    cout << Foo(1, 2) << endl;    
}

