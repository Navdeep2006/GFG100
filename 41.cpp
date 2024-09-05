// 41. Write a Program to Calculate the Factorial of a Number Using Recursion

#include <iostream>

using namespace std;

unsigned long long factorial(int n){
    if(n==1 || n==0) return 1;
    return n * factorial(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}