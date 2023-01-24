#include <iostream>
using namespace std;
int main(){
char a ;
cout<<"Enter a character : "<<endl;
cin>>a;
if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
{
    cout<<"The given character is a vowel ";
}
else{
    cout<<"It is a constant";
}

return 0 ;
}