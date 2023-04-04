#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int * const c_ptr = &num;
    int* ptr = &num;

    *ptr = 1;
    cout << *c_ptr << endl;

}
