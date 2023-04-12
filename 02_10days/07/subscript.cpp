#include <iostream>
#include <cstring>

using namespace std;

struct Person
{
    double salary;
    char *name;
};

class SalaryManage
{
    Person *employ;
    int max;
    int n;
public:
    SalaryManage(int Max = 0)
    {
        max = Max;
        n = 0;
        employ = new Person[max];
    }

    double &operator[](const char *Name)
    {
        Person *p;
        for (p = employ; p < employ + n; p++)
            if (strcmp(p->name, Name) == 0)
                return p->salary;
        p = employ + n++;
        p->name = new char[strlen(Name) + 1];
        strcpy(p->name, Name);
        p->salary = 0;
        return p->salary;
    }

    void display()
    {
        for (int i = 0; i < n ; i++)
            cout << employ[i].name << " " << employ[i].salary << endl;
    }

};

int main()
{
    SalaryManage s(3);

    s["张三"] = 2188.88;
    s["里斯"] = 1230.07;
    s["王无"] = 3200.97;
    cout << "张三\t" << s["张三"] << endl;
    cout << "里斯\t" << s["里斯"] << endl;
    cout << "王无\t" << s["王无"] << endl;

    cout << "-------下为display的输出--------\n\n";
    s.display();
}
