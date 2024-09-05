// 23. Write a Program to Find the Smallest and Largest Element in an Array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=arr[0],maxi=arr[0];
    for(int i=0;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }else if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    cout<<mini<<" "<<maxi;
}