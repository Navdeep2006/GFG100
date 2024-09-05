// 13. Write a Program to Find the Sum of the First N Natural Numbers

#include<iostream>
using namespace std;

int fun_loop(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int fun_con(int n){
    int sum=(n*(n+1))/2;
    return sum;
}


int main(){
    int n;
    cin>>n;
    cout<<fun_loop(n)<<endl;
    cout<<fun_con(n);
}