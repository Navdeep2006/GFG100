#include<iostream>
using namespace std;

int inp(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int out(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}