#include <iostream>
#include "apple.cpp"

using namespace std;

Apple::Apple(int i) : apple_number(i) {}

void Apple::take(int num) const {
    cout << "take func " << num << endl;
}

int Apple::add() 
{ 
    take(1); 
    return 0;
    }
int Apple::add(int num) const 
{ 
    take(num); 
    return num;
}

int Apple::getCount() const
{
    take(1);
    return apple_number;
}

int main(){
    Apple a(2);
    cout << a.getCount() << endl;
    a.add(10);

    const Apple b(3);
    b.add(100);

    return 0;
}
