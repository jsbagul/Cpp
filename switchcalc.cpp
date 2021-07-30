#include<iostream>
using namespace std;

 int main(){
 float a,b;
 cout<<"Enter a numbers";
 cin>>a>>b;
char oper;
cout<<"Enter oparand";
cin>>oper;

switch (oper)
{
case '+':
 cout<<a+b<<endl;
    break;
case '-':
cout<<a-b<<endl;
break;
case '*':
cout<<a*b<<endl;
break;
case '/':
cout<<a/b<<endl;
break;
default:
cout<<"Wrong Input";
    break;
}
    return 0;
}