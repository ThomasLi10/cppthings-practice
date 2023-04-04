#include <iostream>

using namespace std;

static int global_count = 0;

void demo(){
    static int count = 0;
    cout << count << " ";
    count++;
}

void glb_demo(){
    cout << global_count << " ";
    global_count++;
}

int main(){
    for (int i = 0; i < 5; i++)
    {
        demo();
        glb_demo();
    }
    cout << endl;
    return 0;
}
