#include <iostream>
//using namespace std;

class Complex
{
private:
    double r, i;

public:
    Complex(double r = 0, double i = 0) : r(r), i(i) {};
    friend Complex operator+(Complex a, Complex b);
    friend Complex operator+(Complex a, double b);
    friend Complex operator-(Complex a, Complex b);
    friend Complex operator*(Complex a, Complex b);
    friend Complex operator/(Complex a, Complex b);
    void display();
};

Complex operator+(Complex a, double b) 
{
    return Complex(a.r + b, a.i);
}

Complex operator+(Complex a, Complex b) 
{
    return Complex(a.r + b.r, a.i + b.i);
}

Complex operator-(Complex a, Complex b) 
{
    return Complex(a.r - b.r, a.i - b.i);
}

Complex operator*(Complex a, Complex b)
{
    Complex t;
    t.r = a.r * b.r - a.i * b.i;
    t.i = a.r * b.i + a.i * b.r;
    return t;
}

Complex operator/(Complex a, Complex b)
{
    Complex t;
    double x;
    x = 1 / (b.r * b.r + b.i * b.i);
    t.r = x * (a.r * b.r + a.i * b.i);
    t.i = x * (a.i * b.r - a.r * b.i);
    return t;
}

void Complex::display()
{
    std::cout << r;
    if (i > 0)
        std::cout << "+";
    if (i != 0)
        std::cout << i << "i" << std::endl;
}

int main()
{
    Complex c1(1, 2), c2(3, 4), c3, c4, c5, c6;
    Complex a, b(2, 3);

    a = b + 2;
    a.display();

    Complex a2 = 2 + b;
    a2.display();


    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}


