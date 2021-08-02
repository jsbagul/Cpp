#include<iostream>
using namespace std;
int main(){
    int n;
    n=5;
  for (int i = 1; i <=n; i++)
  {
      for (int k = 1; k<=n; k++)
      {
          if (k<=n-i)
          {
             cout<<"-";
          }else
          {
              cout<<"*";
          }
      }
      
      cout<<endl;
     
  }
  

}