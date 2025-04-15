// constructor concept
#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    double price;
    public:
        Book(){
            author="UNKNOWN";
            title="UNKWON";
            price=0;
            cout<<"Default constructer called"<<endl;
        }
        void display(){
            cout<<"Title : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Price : "<<price<<endl;
        }
};
int main(){
    Book b1,b2,b3;
    b1.display();
    b2.display();
    b3.display();
}