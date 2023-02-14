#include <iostream>
#include <vector>
#include <complex>
using namespace std;

class Complex{
    private:
        double imaginary,real;
    public:
        Complex(){
            this->imaginary=1;
            this->real=0;
        };

        Complex(double b){
            this->real=0;
            this->imaginary=b;
        };

        Complex(double a,double b){
            this->real=a;
            this->imaginary=b;
        };

        void Display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        };

        ~Complex(){
            cout<<"Destructor executed"<<endl;
        };
};

int main(){
    Complex obj1,obj2(5),obj3(10,20);
    obj1.Display();
    obj2.Display();
    obj3.Display();
}   