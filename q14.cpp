#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Entre a Number: ";
cin>>a;
cout<<"Multiplicatin of the table "<<a<<" is : "<<endl ;
for (int i = 1; i < 11; i++)
{
    cout<<a<<"x"<<i<<"="<<a*i<<endl;
}


return 0 ;
}