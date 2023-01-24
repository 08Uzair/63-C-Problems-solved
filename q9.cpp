#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter a 1st Number : ";
cin>>a;
int b;
cout<<"Enter a 2nd Number : ";
cin>>b;
int c;
cout<<"Enter a 3rd Number : ";
cin>>c;
if (a>b & a>c)
{
    cout<<"The value of a is greater";
}
 else if (b>a & b>c)
{
    cout<<"The value of b is greater";
}
else
{
    cout << "The value of c is greater";
}

return 0 ;
}