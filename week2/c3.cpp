// parameterized constructor
#include<iostream>
using namespace std;
class complex{
    private:
        int real,imag;
    public:
        complex(int r,int i){
            real=r;
            imag=i;
        }
        complex add(complex c1,complex c2){
            int sum_real=c1.real+c2.real;
            int sum_imag=c1.imag+c2.imag;
            return complex(sum_real,sum_imag);
        }
        void display(){
            cout<< real << " + "<< imag<<"i"<<endl;
        }
};
int main(){
    int real1 , imag1;
    cout<<"Enter the real part : ";
    cin>>real1;
    cout<<"Enter the imaginary part : ";
    cin>>imag1;

    complex userCOMPLEX(real1,imag1);
    complex constructorCOMPLEX(3,4);

    complex result=result.add(userCOMPLEX,constructorCOMPLEX);

    result.display();


}