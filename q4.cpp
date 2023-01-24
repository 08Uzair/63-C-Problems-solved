//  Write a programm to find the Remainder and  the Quotient of the given two numbers by the user : 
 #include <iostream>
 using namespace std;
 int main(){
 int a;
 cout<<"Entre the value of dividend : ";
 cin>>a;
 int b;
 cout<<"Entre the value of divisor : ";
 cin>>b;
int c= a%b;
cout<<"The Remainder by dividing the given two numbers is "<<c<<endl;
int d= a/b;
cout<<"The Quetiont by dividing the given two numbers is "<<d<<endl;

 return 0 ;
 }