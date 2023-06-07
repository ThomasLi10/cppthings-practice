#include <cstring>
#include <iostream>

using namespace std;

struct Person
{
    char *name;
    double salary;
};

class SalaryManage
{
private:
    Person *employer;
    int max;
    int n;

public:
    SalaryManage(int max = 0)
    {
        max = max;
        employer = new Person[max];
        n = 0;
    };

    double &operator[](const char *name)
    {
        Person *p;
        for (p = employer; p != employer + n; p++)
        {
            if (strcmp(p->name, name) == 0)
            {
                //cout << p->name << " " << name << endl;
                return p->salary;
            }
        }

        p = employer + n++;
        p->name = new char[strlen(name) + 1];
        strcpy(p->name, name);
        p->salary = 0.;
        return p->salary;
    }

    ~SalaryManage() { delete[] employer; }

    void display()
    {
        for (int i = 0; i != n; i++)
            cout << employer[i].name << " " << employer[i].salary << endl;
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

    s.display();
}
