// 15. Write a Program to Find a Leap Year or Not

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%400==0){
        cout<<"leap year";
    }else if(n%100==0){
        cout<<"not leap year";
    }else if(n%4==0){
        cout<<"leap year";
    }else{
        cout<<"not leap year";
    }
}