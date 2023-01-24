// C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case ::
#include <bits/stdc++.h>
using namespace std;
int main(){

double a, b;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
char op;
cout << "Choose any one operator from '+','-','*','/' " << endl;
cin >> op;
switch (op)
{
case ('+'):
   cout<< "The Addation of the given two numbers is "<<a+b;
    break;
case ('-'):
   cout<< "The Substraction of the given two numbers is "<<a-b;
    break;
case ('*'):
   cout<< "The Multiplication of the given two numbers is "<<a*b;
    break;
case ('/'):
   cout<< "The Division of the given two numbers is "<<a/b;
    break;

default:
    cout<<"The given operator is not in our Dictionary";
    break;
}



return 0 ;
}