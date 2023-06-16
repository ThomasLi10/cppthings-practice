#include <iostream>

using namespace std;

template<typename T, int MAXSIZE>
class Queue {
private:
    int ptr;
    T elems[MAXSIZE];
public:
    Queue() {
        ptr = -1;
    }

    bool is_full() { return ptr >= MAXSIZE - 1; }
    bool is_empty() { return ptr < 0; }

    void push(T e);
    T pop();
};


template<typename T, int MAXSIZE> void Queue<T, MAXSIZE>::push(T e){
    if ( ! is_full() )
        elems[++ptr] = e;
    else
        cout << "Full!" << endl;
}

template<typename T, int MAXSIZE> T Queue<T, MAXSIZE>::pop(){
    if ( ! is_empty() ){
        T e = elems[0];
        if ( ptr > 0 ){
            for (int i = 1; i <= ptr; i++)
                elems[i-1] = elems[i];
        }
        --ptr;
        return e;
    } else {
        cout << "Empty!" << endl;
        return 0;
    }

}








int main(int argc, const char* argv[]){
    Queue<int, 10> q;

    for (int i = 1; i < 11; i++)
        q.push(i);
    for (int i = 1; i < 12; i++)
        cout << q.pop() << " ";
    cout << endl;

}
