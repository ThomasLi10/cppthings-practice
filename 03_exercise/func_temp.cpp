#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template<class T> T compare_max(T t1, T t2) {
    return t1 > t2 ? t1 : t2;
}

template <> string compare_max(string s1, string s2) {
    cout << "Comparing strings!" << endl;
    return s1 > s2 ? s1 : s2;
}

template <> const char* compare_max(const char* s1, const char* s2) {
    cout << "Comparing chars!" << endl;
    return strcmp(s1, s2) ? s1 : s2;
}






int main(int argc, char const *argv[]) {
    cout << compare_max(1, 2) << endl;
    cout << compare_max(1.0, 2.1) << endl;
    cout << compare_max("asda", "qweq") << endl;

    string s1("abc");
    string s2("edf");
    cout << compare_max(s1, s2) << endl;

    return 0;
}
