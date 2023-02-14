#include<iostream>

using namespace std;

class Pass{
    public:
    int a;

    int sum(int a,int b){
        return a+b;
    }
};

int Fibo(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(Fibo(n-1)+Fibo(n-2));
    }
}
 
int main()
{
    Pass obj1;
    Pass obj2;
    Pass obj3;
    Pass arr[3]={obj1,obj2,obj3};
    cout<<"Size of obj1: "<<sizeof(obj1)<<"\nsize of obj2: "<<sizeof(obj2)<<"\nsize of obj3: "<<sizeof(obj3)<<"\nSize of array of object: "<<sizeof(arr)<<endl;
    // int n,i=0;
    // cout<<"Input the number of terms:";
    // cin>>n;
    // cout<<"\nSeries:\n";
 
    // while(i<n)
    // {
    //     cout<<" "<<Fibo(i);
    //     i++;
    // }
 
    // return 0;
}