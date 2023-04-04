#include <iostream>
using namespace std;

int main(){
    const int num = 0;
    const int * const c_ptr = &num;
    cout << *c_ptr << endl;

}
