// basics only 
#include<iostream>
using namespace std;

class item // class 
{
    static int count;// private data member
    int number;//private data member 
    public:
        
        void getdata(int a)// public member function 
        {
                
            number=a;
            count++;
        }
        void getcount(void){
            cout<<"count : ";
            cout<<count<<endl;
        }

}; // termination of class item
int item :: count=10;

int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    a.getcount();
    b.getcount();
    c.getcount();
    b.getdata(1000);
    a.getcount();
    b.getcount();
    c.getcount();

    c.getdata(100000);
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;

}