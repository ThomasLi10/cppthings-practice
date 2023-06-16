#include <string>
#include <iostream>

using namespace std;

class Employer {
private:
    string Name;
    string ID;
protected:
    int salary = 0;
public:
    Employer(string name, string id){
        Name = name;
        ID = id;
    }
    string get_name() {return Name;}
    string get_id() {return ID;}
    void display(){
        cout << "Name: " << Name << ", ID: " << ID << ", Salary: " << salary << endl;
    }

};

class Manager: public Employer {
private:
    int salary_per_week = 1000;
public:
    Manager(string name, string id, int week) : Employer(name, id){
        salary = week * salary_per_week;
    }
};

class SaleWorker: public Employer {
private:
    int base_salary = 800;
    double cut = 0.05;
public:
    SaleWorker(string name, string id, int num, int price) : Employer(name, id){
        salary = base_salary + cut * num * price;
    }

};

class HourWorker: public Employer {
private:
    int salary_per_hour = 100;
public:
    HourWorker(string name, string id, int hour) : Employer(name, id){
        salary = hour * salary_per_hour;
    }

};


int main(int argc, char const *argv[]) {
    cout << "请输入 Manager 工作周：";
    int week;
    cin >> week;
    Manager m("小王", "11111111", week);
    m.display();


    cout << "请输入销售价格：";
    int price;
    cin >> price;
    cout << "请输入销售件数：";
    int x;
    cin >> x;
    SaleWorker s("小李", "222222", x, price);
    s.display();


    cout << "请输入工作小时：";
    int hour;
    cin >> hour;
    HourWorker h("小何", "333333", hour);
    h.display();

    return 0;
}
