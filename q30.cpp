// Write  a code to create the Pattern of the Pyaramid
#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number of Rows : ";
cin>>a;
for (int i = 1; i <=a; i++)
{
    for (int j = 1; j <=i; j++)
    {
       cout<<"*";
    }
    cout<<"\n";
    
}


return 0 ;
}