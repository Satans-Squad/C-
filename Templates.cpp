#include <iostream>
using namespace std;

template<class T>
class Stack{

    private:
        T *arr;
        int size;
        int topEle=-1;
    public:

    Stack(int size){
        this->size=size;
        arr=new T[size];
    };

    bool isEmpty(){
        if(this->topEle==-1){
            return true;
        }
        return false;
    };

    bool isFull(){
        if(this->topEle==this->size-1){
            return true;
        }
        return false;
    };
        
    void push(T data){
        if(isFull()){
            cout<<"\nStack Overflow!"<<endl;
            return;
        }
        this->arr[++topEle]=data;
        cout<<data<<" pushed successfully!"<<endl;
    };

    T pop(){
        if(isEmpty()){
            return -1;
        }
        return this->arr[topEle--];
    };

    T top(){
        if(isEmpty()){
            return -1;
        }
        return this->arr[topEle];
    };
};

int main(){
    Stack<int> obj1(2);
    for(int i=0;i<3;i++){
        obj1.push(i);
    }
    for(int j=0;j<3;j++){
        int element=obj1.pop();
        if(element==-1){
            cout<<"Stack Underflow!";
            break;
        }
        cout<<"The popped element is : "<<element<<endl;
    }
    return 0;
}
