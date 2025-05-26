#include <iostream>
using namespace std;

class Teacher{
private:
    int salary;
public:
    string name;
    string subject;
    string designation;

    void changeSubject(string newSubject){
        subject = newSubject;
    }

    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Sajid";
    t1.subject = "Programming";
    t1.designation = "SST";
    t1.setSalary(25000);
    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.designation << endl;
    cout << t1.getSalary() << endl;
    return 0;
}