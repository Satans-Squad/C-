#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream fin("name.txt");
    string name,s,pos=" ";
    int c=0,f=0,line=0;
    cout<<"\nEnter name to be search in file= ";
    cin>>name;
    while(fin.eof()==0){
        getline(fin,s);
         ++line;
        if(s.compare(name)==0){
            pos+=to_string(line);
            pos+=" ";
            ++c;
            f=1;
        }

    }
    if(f==0){
        cout<<name<<" not found in file"<<endl;
    }
    else{
        cout<<name<<" found "<<c<<" times in file at line/lines "<<pos<<endl;
    }
    return 0;
}