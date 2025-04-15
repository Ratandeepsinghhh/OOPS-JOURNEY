// copy constructor concept
#include<iostream>
using namespace std;
class example{
    public:
    int a;
    
    // parameterized constructor 
    example(int x){
        a=x;
    }
    // copy constructor
    example(example &ob){
        a=ob.a;
    }
};
int main(){
    example e1(4);// calling parameterized constructor
    example e2(e1);// copy constructor called
    cout<<e2.a;
    return 0;
}