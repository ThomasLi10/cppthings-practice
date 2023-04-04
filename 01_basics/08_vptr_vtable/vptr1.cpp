#include <iostream>
#include <stdio.h>

using namespace std;

typedef void (*Fun)();

class Base
{
public:
    Base() {};
    virtual void fun1()
    {
        cout << "Base::fun1()" << endl;
    }
    virtual void fun2()
    {
        cout << "Base::fun2()" << endl;
    }
    virtual void fun3(){}
    ~Base() {};
};

class Derived: public Base
{
public:
    Derived() {};
    void fun1()
    {
        cout << "Derived::fun1()" << endl;
    }
    void fun2()
    {
        cout << "Derived::fun2()" << endl;
    }
    ~Derived() {};
};

Fun getAddr(void* obj, unsigned int offset)
{
    cout << "=========================" << endl;
    void* vptr_addr = (void *) *(unsigned long *) obj;
    printf("vptr_addr: %p\n", vptr_addr);

    void* func_addr = (void *) *((unsigned long *)vptr_addr + offset);
    printf("func_addr: %p\n", func_addr);

    return (Fun) func_addr;
}

int main(void)
{
    Base ptr;
    Derived d;
    Base *pt = new Derived();
    Base &pp = ptr;
    Base &p = d;
    cout << "基类对象直接调用" << endl;
    ptr.fun1();

    cout << "基类引用指向基类实例" << endl;
    pp.fun1();

    cout << "基类指针指向派生类实例并调用虚函数" << endl;
    pt->fun1();

    cout << "基类引用指向派生类实例并调用虚函数" << endl;
    p.fun1();

    // Look for vptr and vtable manually
    Fun f1 = getAddr(pt, 0);
    (*f1)();

    Fun f2 = getAddr(pt, 1);
    (*f2)();

    delete pt;
    return 0;

}
