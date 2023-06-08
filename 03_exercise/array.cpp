#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* sptr;
    char* sptr2;
    const char* s = "hello";

    sptr = new char[strlen(s) + 1];
    sptr2 = new char[strlen(s) + 1];
    strcpy(sptr, s);
    strncpy(sptr2, s, strlen(s));
    cout << sptr << endl;
    cout << sptr2 << endl;

    delete sptr;
    delete sptr2;

    return 0;

}
