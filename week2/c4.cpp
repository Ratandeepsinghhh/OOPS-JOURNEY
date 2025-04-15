// parameterized constructor
#include<iostream>
#include<math.h>
using namespace std;
class area{
    
    int radius;
    public:
    area(int r){
        radius=r;
    }
    int calculate(){
        return 3.14*pow(radius,2);
    }
    
};
int main(){
    int radius;
    cout<<"enter the radius "<<endl;
    cin>>radius;
    area c1(radius);
    int area = c1.calculate();
    cout<<"The area of the circle is : "<<area<<endl;



   
}