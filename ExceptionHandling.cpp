#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

class Program
{
   char name[15];
   int marks;
   public:
   Program()
   {
      marks=0;
   }
   void Input(){
      try{
         // input the user name
         cout<<"\nEnter your first name:";
         cin>>name;

         // check if it contains integer values or not
         for(int i=0;i<strlen(name);i++){
            // if the input data contains integer values then throw character exception
            if(!isalpha(name[i])){
               throw "\nException occured! the name should only contain string";
            }
         }

         // input the marks 
         cout<<"\nEnter your marks:";
         cin>>marks;

         // if the input data is not appropriate or is less than 0 then throw integer exception
         if(cin.fail() || marks<0)
            throw marks;  //throwing int as exception
      
         else
            cout<<name<<" has scored "<<marks<<" marks "<<"\n";
      }
      catch(int)  //catch an integer exception
      {
         cout<<"\nException occured! the marks are not appropriate"<<endl;
      }
      catch (char const *s){     //catch a character exception
         cout<<s;
      }
   };
};

int main()
{
   Program f;
   f.Input();
   return 0;
}