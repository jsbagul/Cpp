/*we have to find min and max of two number*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
  cout<<"Enter a";
  cin>>a;
  cout<<"Enter b";
  cin>>b;
  if(a==b){
      cout<<"both Number are equal";
  }
  else{
      if(a>b){
      cout<<a<<"is greater"<<endl;
      cout<<b<<"is smaller"<<endl;
      }
      else{
      cout<<b<<"is greater"<<endl;
      cout<<a<<"is smaller"<<endl;
  }}

return 0;
}