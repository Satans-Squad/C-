#include<iostream>
using namespace std;

// Base Class
class Shape{
    public:
        virtual void draw(){
            cout<<"The shape is executed"<<endl;
        }
};

// Derived classes
class Square: public Shape{
    public:
    void draw(){
        cout<<"The Square shape is executed"<<endl;
    }

};
class Triangle: public Shape{
    public:
    void draw(){
        cout<<"The triangle shape is executed"<<endl;
    }

};
class Circle: public Shape{
    public:
    void draw(){
        cout<<"The circle shape is executed"<<endl;
    }

};
int main()
{
    // declaring the array of base class pointers
    Shape *ptr[3];

    // initializing the objects
    Square s;
    Triangle t;
    Circle c;

    // upcasting
    ptr[0]=&s;
    ptr[1]=&t;
    ptr[2]=&c;

    // Function call
    ptr[0]->draw();
    ptr[1]->draw();
    ptr[2]->draw();
}