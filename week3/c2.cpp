// single inheritance 
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



int main(){
    dog mydog;
    mydog.eat();
    mydog.bark();
}