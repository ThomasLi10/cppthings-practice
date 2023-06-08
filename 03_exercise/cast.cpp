/* 运算符重载之强制转换.cpp */
/*
有一个类Circle，设计该类的类型转换函数，当将Circle对象转换成int型时，返回圆的半径；当将它转换成double型时，就返回圆的周长；当将它转换成float型时，就返回圆的面积。
*/

#include <iostream>

#define PI 3.1415926

using namespace std;

class Circle {
private:
    double r;
        
public:
    Circle(double r1){
        r = r1;
    }
    operator int(){
        return int(r);
    }
    operator double(){
        return 2 * PI * r;
    }
    operator float(){
        return float(PI * r * r);
    }

};


int main() {
    Circle c(2.5);
    int r = c;         //调用operator int()，将Circle类型转换成int
    double length = c; //调用operator double()，转换成double
    float area = c;    //调用operator float()，将Circle类型转换成float
    double len = (double)c; //将Cirlce类型对象强制转换成double
    cout << r << endl;
    cout << length << endl;
    cout << len << endl;
    cout << area << endl;
}
