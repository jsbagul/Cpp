#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value";
    cin>>n;
    int i;
    for( i=2;i<n;i++){
     if(n%i==0){
         cout<<n<<" Is NotPrime";
         break;
     }
    }
     if(i==n){
           cout<<n<<" Number is Prime";
     }
    
    return 0;
}