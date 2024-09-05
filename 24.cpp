// 24. Write a Program to Find the Second Smallest Element in an Array
#include<iostream>
#include <limits.h> 
#include "inp-out.cpp"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    inp(arr,n);
    int mini1=INT_MAX,mini2=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini1){
            mini2=mini1;
            mini1=arr[i];
        }
        else if(arr[i] != mini1 and arr[i]<mini2){
            mini2=arr[i];
        }
    }
    cout<<mini2;

}