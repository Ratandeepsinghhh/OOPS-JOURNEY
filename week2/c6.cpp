//destructor concept 
#include<iostream>
using namespace std;
class example{
    public:
    example(){
        cout<<"constructor called"<<endl;
    }
    ~example(){ // used to destroy the memory 
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    example e1,e2;
    cout<<&e1<<endl;
    cout<<&e2<<endl;
    return 0;
    // Destructor is used to deallocate the memory 
}