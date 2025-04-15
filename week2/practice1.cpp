/*program for employee management system that manages
employee details such as ID , name , age and salary. 
The system should utilize both default and parameterized
constructors to create employee object*/ 
#include<iostream>
using namespace std;
class employee{
    private:
    int ID,age,salary;
    string name;
    public:
    employee(){
        ID=0;
        name="UNKNOWN";
        age=18;
        salary=0;
    }
    employee(int i,int a,int s,string n){
        cout<<"default contructor  is called "<<endl;//default constructor called
        ID=i;
        age=a;
        salary=s;
        name=n;
    }
    void display(){
        
        cout<<"ID : "<<ID<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};
int main(){
    employee e3;
    e3.display();
    employee e1(18,19,100000,"Ratandeep Singh");
    e1.display();
    employee e2(45,40,500000,"Rohit Sharma");
    e2.display();
    
    
}