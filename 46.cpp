// 46. Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x^y) cout<<"not equal";
    else cout<<"equal";
}