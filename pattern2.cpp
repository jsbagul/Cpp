#include<iostream>
using namespace std;

int main(){
    int n;
    n=5;
    for (int row = n; row >=1; row--)
    {
        for (int hash=1;hash<=row;hash++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
    