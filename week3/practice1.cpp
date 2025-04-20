#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int id;
    int age;
public:
    person(string n, int a, int i) {
        name = n;
        age = a;
        id = i;
    }
    void displayperson() {
        cout << "NAME : " << name << endl;
        cout << "AGE : " << age << endl;
        cout << "ID : " << id << endl;
    }
};

class student : public person {
protected:
    string dept;
    double GPA;
public:
    student(string studentname, int studentage, int studentid, string department, double gpa)
        : person(studentname, studentage, studentid) {
        dept = department;
        GPA = gpa;
    }

    void displaystudent() {
        cout << "DEPARTMENT : " << dept << endl;
        cout << "GPA : " << GPA << endl;
    }
};

class graduatestudent : public student {
public:
    string status = "graduated";

    graduatestudent(string studentname, int studentage, int studentid, string department, double gpa)
        : student(studentname, studentage, studentid, department, gpa) {}

    void displaygraduated() {
        cout << "COURSE STATUS : " << status << endl;
    }
};

int main() {
    graduatestudent S1("RATANDEEP SINGH", 22, 9, "Computer Science", 8.3);
    cout << "Graduate Student Information:\n";
    S1.displayperson();
    S1.displaystudent();
    S1.displaygraduated();
    return 0;
}
