// 17. Write a Program to Check Palindrome

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int check=n,temp=0,last;
    while(n>0){
        last=n%10;
        temp=temp*10+last;
        n/=10;
    }
    if(temp==check){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
}