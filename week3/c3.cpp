// multlevel inheritance
#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eating...."<<endl;
    }
};
class dog : public animal {                    // class dog is derived class which inherits class animal publically 
        public:
        void bark(){
            cout<<"barking..."<<endl;
        }
};
class babydog : public dog{                   // class babydog is derived class 2 which inherits class dog publically 
    public:
    void weep(){
        cout<<"weeping..."<<endl;
    }
};



int main(){
    babydog mydog;
    mydog.eat();
    mydog.bark();
    mydog.weep();
    return 0;
}