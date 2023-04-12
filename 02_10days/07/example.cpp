#include <cstring>
#include <iostream>
#include <stdio.h>

using namespace std;

class String
{
private:
    int length;
    char *sPtr;
    void setString(const char *s2);
    friend ostream &operator<<(ostream &os, String &s)
    {
        return os << s.sPtr;
    };
    friend istream &operator>>(istream &is, String &s)
    {
        return is >> s.sPtr;
    };

public:
    String(const char * = "");
    const String &operator=(const String &R)
    {
        length = R.length;
        strcpy(sPtr, R.sPtr);
        return *this;
    };
    const String &operator+=(const String &R);
    bool operator==(const String &R);
    bool operator!=(const String &R);
    bool operator!();
    bool operator<(const String &R) const;
    bool operator<=(const String &R) const;
    bool operator>(const String &R) const;
    bool operator>=(const String &R) const;
    char &operator[](int);
    ~String(){};
};

String::String(const char *str)
{
    sPtr = new char[strlen(str) + 1];
    strcpy(sPtr, str);
    length = strlen(str);
}

const String &String::operator+=(const String &R)
{
    char *temp = sPtr;
    length += R.length;
    sPtr = new char[length + 2];
    strcpy(sPtr, temp);
    strcat(sPtr, " ");
    strcat(sPtr, R.sPtr);
    delete[] temp;
    return *this;
}

bool String::operator==(const String &R) { return strcmp(sPtr, R.sPtr) == 0; }
bool String::operator!=(const String &R) { return !(*this == R); }
bool String::operator!() { return length == 0; }
bool String::operator<(const String &R) const 
{
    return strcmp(sPtr, R.sPtr) < 0;
}
bool String::operator<=(const String &R) const { return !(R < *this); }
bool String::operator>(const String &R) const { return R < *this; }
bool String::operator>=(const String &R) const { return !(*this < R); }
char &String::operator[](int subscript) { return sPtr[subscript]; }

int main(int argc, char const *argv[])
{
    String s1("happy"), s2("new year"), s3;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "比较s2和s1:" << endl;
    cout << "s2 == s1 : " << (s2 == s1 ? "true" : "false") << endl;
    cout << "s2 != s1 : " << (s2 != s1 ? "true" : "false") << endl;
    cout << "s2 >  s1 : " << (s2 >  s1 ? "true" : "false") << endl;
    cout << "s2 >= s1 : " << (s2 >= s1 ? "true" : "false") << endl;
    cout << "s2 <  s1 : " << (s2 <  s1 ? "true" : "false") << endl;
    cout << "s2 <= s1 : " << (s2 <= s1 ? "true" : "false") << endl;
    cout << endl;

    cout << "测试s3是否为空：";
    if (!s3)
    {
        cout << "s3是空串" << endl;
        cout << "将s1赋值给s3的结果是：";
        s3 = s1;
        cout << "s3 = " << s3 << endl;
    }
    
    cout << "s1 += s2 的结果是：";
    s1 += s2;
    cout << "s1 = " << s1 << endl;

    cout << "s1 += \"to you\" 的结果是：";
    s1 += "to you";
    cout << "s1 = " << s1 << endl;

    s1[0] = 'H';
    s1[6] = 'N';
    s1[10] = 'Y';
    cout << "s1 = " << s1 << endl;


}


