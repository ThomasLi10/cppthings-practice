#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Person {
private:
    string Name;
    double Math;
    double Chinese;
    double English;
    double Sum;
public:
    Person() {}
    Person(string name, double math, double chinese, double english){
        Name = name;
        Math = math;
        Chinese = chinese;
        English = english;
        Sum = math + chinese + english;
    }
    void display() {
        cout << Name << "\t" << Math << "\t" << Chinese << "\t" << English << "\t" << Sum << endl;
    }
};


int main(int argc, const char* argv[]){
    string name;
    double math, chinese, english;

    char ch;
    
    fstream f;
    f.open("./person.date", ios::out | ios::app);
    do {
        cout << "Name: ";
        cin >> name;
        cout << "Math: ";
        cin >> math;
        cout << "Chinese: ";
        cin >> chinese;
        cout << "English: ";
        cin >> english;
        Person per(name, math, chinese, english);
        f.write((char*) &per, sizeof(per));

        cout << "Continue? (Y/y)" << endl;
        cin >> ch;
    } 
    while (ch == 'Y' || ch == 'y');
    f.close();

    f.open("./person.date", ios::in);
    Person p;
    vector<Person> v;
    while (!f.eof()) {
        f.read((char*) &p, sizeof(p));
        v.push_back(p);
    }
    f.close();

    for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it){
        (*it).display(); 
    }


}
