// 19. Write a Program to Find the Nth Term of the Fibonacci Series
#include<iostream>
using namespace std;

int main(){
    int f=0,s=1,n,t;
    cin>>n;
    if(n==1) cout<<0;
    else if(n==2) cout<<1;
    else {
        for(int i=2;i<n;i++){
            t=f+s;
            f=s;
            s=t;
        }
        cout<<t;
    }
    
}