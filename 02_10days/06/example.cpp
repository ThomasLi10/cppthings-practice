#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee(string Name, string id) : name(Name), Id(id) {}
    string getName() const { return name; }
    string getID() const { return Id; };
    virtual float getSalary() const { return 0.0; }
    virtual void print() const
    {
        cout << "姓名：" << name << "\t\t 编号：" << Id << endl;
    }

private:
    string name;
    string Id;
};

class Manager : public Employee
{
public:
    Manager(string Name, string id, int week) : Employee(Name, id)
    {
        WeeklySalary = week * 1000;
    }
    float getSalary() const { return WeeklySalary; }
    void print() const
    {
        cout << "经理：" << getName() << "\t\t 编号：" << getID() 
        << "\t\t 总工资：" << getSalary() << endl;
    }
private:
    float WeeklySalary;
};

class SaleWorker : public Employee
{
public:
    SaleWorker(string name, string id, int profit, int x) : Employee(name, id)
    {
        workerMoney = baseMoney + x * 0.05 * profit;
    }
    float getSalary() const {return workerMoney;}
    void print() const
    {
        cout << "销售员：" << getName() << "\t\t 编号：" << getID() 
        << "\t\t 总工资：" << getSalary() << endl;
    }

private:
    float baseMoney = 800.0;
    float workerMoney;
};

class HourWorker : public Employee
{
public:
    HourWorker(string name, string id, int h) : Employee(name, id)
    {
        TotalMoney = h * hourMoney;
    }
    float getSalary() const { return TotalMoney; };
    void print() const
    {
        cout << "小时工：" << getName() << "\t\t 编号：" << getID() 
        << "\t\t 总工资：" << getSalary() << endl;
    }

private:
    float hourMoney = 100.0;
    float TotalMoney;
};

int main()
{
    cout << "请输入工作周：";
    int week;
    cin >> week;
    Manager m("小王", "11111", week);
    m.print();

    cout << "请输入销售利润：";
    int profit;
    cin >> profit;
    cout << "请输入销售件数：";
    int x;
    cin >> x;
    SaleWorker s("小李", "22222", profit, x);
    s.print();

    cout << "请输入工作小时：";
    int hour;
    cin >> hour;
    HourWorker h("小刘", "33333", hour);
    h.print();

}
