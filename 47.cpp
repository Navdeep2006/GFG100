// 47. Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator

#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"max is:"<<(x+y+abs(x-y))/2<<endl;
    cout<<"min is:"<<(x+y-abs(x-y))/2<<endl;
}