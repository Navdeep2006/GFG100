// 16. Write a Program to Check the Prime Number

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=1;
    if(n==2);
    else{
        for(int i=2;i<n/2;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
    }
    if(flag) 
    cout<<"prime";
    else cout<<"not prime";
}