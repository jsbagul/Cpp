#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter button";
    cin>>button;

    switch(button)
    {
    case 'a':
    cout<<"hello";
        break;
    case 'b':
     cout<<"namaste";
     break;
    case 'c':
     cout<<"welcome";
     break;
    case 'd':
    cout<<"ramram";  
    break;
    default:
    cout<<"something is diffrant";
        break;
    }
return 0;
}