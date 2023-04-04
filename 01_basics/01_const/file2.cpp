#include <iostream>

extern int ext;
extern const int c_ext;

int main(){
    std::cout << ext + 10 << std::endl;
    std::cout << c_ext << std::endl;
    return 0;
}
