#include <iostream>

using namespace std;

template <typename T, int MAXSIZE>
class Stack{
private:
    T elems[MAXSIZE];
    int top;
public:
    Stack() {
        top = -1;
    }
    //void init() {top = -1;}
    bool isFull(){
        if (top >= MAXSIZE - 1)
            return true;
        else
            return false;
    }
    bool isEmpty(){
        if (top == -1)
            return true;
        else
            return false;
    }

    void push(T e);
    T pop();
};

template <typename T, int MAXSIZE> void Stack<T, MAXSIZE>::push(T e){
    if (!isFull()){
        elems[++top] = e;
    }
    else {
        cout << "Full! No more element!" << endl;;
    }
}

template <typename T, int MAXSIZE> T Stack<T, MAXSIZE>::pop(){
    if (!isEmpty()){
        return elems[top--];
    }
    else {
        cout << "Empty!" << endl;
        return 0;
    }
}

int main(int argc, char const* argv[]){
    Stack<int, 10> s1;
    for (int i = 1; i < 11; i++)
        s1.push(i);
    for (int i = 0; i < 11; i++)
        cout << s1.pop() << " ";
    cout << endl;
}
