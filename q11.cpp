// Write a program to do the sum of the natural number till the given range ::
#include <iostream>
using namespace std;
int main(){
int a ,b =0;
cout<<"Enter a number : ";
cin>>a;
for (int i = 1; i <=a; i++)
{
   b+=i ;
}
cout<<"The Sum of the Given Natural number is : "<<b<<endl;
return 0 ;
}