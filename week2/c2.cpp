// constructor 
#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    long int salary;
    employee(int i , string n ,long int s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(){
    employee e1(18,"Ratandeep singh",1000000);
    e1.display();
}