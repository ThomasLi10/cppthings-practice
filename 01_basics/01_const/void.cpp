#include <iostream>
using std::cout;
using std::endl;

int main(){
    const int p = 10;
    const int *ptr1 = &p;
    const void *ptr2 = &p;

    cout << ptr1 << endl;
    cout << ptr2 << endl;
}
