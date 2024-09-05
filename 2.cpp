// 2 Write a Program to Find the Greatest of the Three Numbers.

#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b and a>=c){
        cout<<a;
    }else if (b>=c){
        cout<<b;
    }else{
        cout<<c;
    }
}