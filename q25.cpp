#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Entre a Number : ";
cin>>a;
for (int i = 2; i < a; i++)
{
  if (a%i==0)
  {
    cout<<"The given number is not a Prime Number ";
  }
  else
  {
    cout<<"The given Number is a Prime Number ";
   }



}


return 0 ;
}