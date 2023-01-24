//Write aprogram to find the roots of the given quadratic equation ::
#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cout<<"Entre the value of a : "<<endl;
cin>>a;
int b;
cout<<"Entre the value of b : "<<endl;
cin>>b;
int c;
cout<<"Entre the value of c : "<<endl;
cin>>c;
int d=(b*b)-(4*a*c);
int e=sqrt(d);
int f =e/2*a;
int g=-f;
int h=f;
cout<<"The roots of the given Quadratic Equation is :"<<g <<"  and  "<<h;




return 0 ;
}