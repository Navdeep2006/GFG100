// 18. Write a Program to Check Whether a Number is an Armstrong Number or Not

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int length=0,temp=n;
    while(temp>0){
        length++;
        temp/=10;
    }
    temp=n;
    int last,check=0;
    while(temp>0){
        last=temp%10;
        check+=pow(last,length);
        temp/=10;
    }
    cout<<check<<endl;
    if(check==n){
        cout<<"armstrong";
    }else{
        cout<<"not armstrong";
    }
}