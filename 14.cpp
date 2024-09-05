// 14. Write a Program to Find the Factorial of a Number Using Loops

#include<iostream>
using namespace std;

int fact_loop(int n){
    int fact=1;
    if (n==0 || n==1);
    else{
        ;
        for(int i=2;i<=n;i++){
            fact*=i;
        }
    }
    return fact;
}

int fact_recur(int n){
    if(n==1 or n==0){
        return 1;
    }
    else{
        return n*fact_recur(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<fact_loop(n)<<endl;
    cout<<fact_recur(n)<<endl;

}