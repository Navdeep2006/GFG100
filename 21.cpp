// 21. Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
// 20. Write a Program to Calculate the Greatest Common Divisor of Two Numbers
#include<iostream>
using namespace std;

int gcd(int x1,int x2){
    if(x2==0){
        return x1;
    }
    gcd(x2,x1%x2);
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    if(num2>num1){
        int temp;
        temp=num2;
        num2=num1;
        num1=temp;
    }
    int gcd_=gcd(num2,num1%num2);
    cout<<(gcd_/num1)*num2;
}