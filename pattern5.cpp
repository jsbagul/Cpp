#include<iostream>
using namespace std;

int main(){
int n; 
n=5;

for (int count=1, i=1 ;i<=n;i++){
  
for (int j =1;  j<=i; j++)
{
    cout<<count<<" ";
    count++;
}

cout<<endl;
}

}