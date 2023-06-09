#include <iostream>
using namespace std;

const int MAX = 3;

class Full {};
class Empty {};

class Stack
{
private:
    int s[MAX];
    int top;
public:
    void push(int a);
    int pop();
    Stack() { top = -1; }
};

void Stack::push(int a)
{
    if (top >= MAX - 1)
        throw Full();
    s[++top] = a;
}

int Stack::pop()
{
    if (top < 0)
        throw Empty();
    return s[top--];
}

int main()
{
    Stack s;
    try
    {
        s.push(10);
        s.push(20);
        s.push(30);

        cout << "stack(0) = " << s.pop() << endl;
        cout << "stack(1) = " << s.pop() << endl;
        cout << "stack(2) = " << s.pop() << endl;
        cout << "stack(3) = " << s.pop() << endl;
    }
    catch (Full)
    {
        cout << "Exception: Stack Full" << endl;
    }
    catch (Empty)
    {
        cout << "Exception: Stack Empty" << endl;
    }
}
