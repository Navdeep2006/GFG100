// 25. Write a Program to Calculate the Sum of Elements in an Array
#include<iostream>
#include "inp-out.cpp"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    inp(arr,n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}