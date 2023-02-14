// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Distance {
   private:
    float ft;
    float in;

   public:
    // Constructor to initialize real and imag to 0
    Distance(){
        this->ft=0;
        this->in=0;
    }
    Distance(float feet,float inches){
        this->ft=feet;
        this->in=inches;
    }

    // Overload the + operator
    Distance operator + (const Distance& obj) {
        Distance temp;
        temp.ft = ft + obj.ft;
        temp.in = in + obj.in;
        if(temp.in>=12){
            temp.ft++;
            temp.in-=12;
        }
        return temp;
    }

    void Display() {
        cout<<"Result: "<<ft<<" ft "<<in<<" in"<<endl;
    }

    ~Distance(){
        cout<<"------Destructor executed--------"<<endl;
    }
};

int main() {
    Distance complex1(5,7), complex2(5,5), result;
    result = complex1 + complex2;
    result.Display();

    return 0;
}