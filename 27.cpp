// 27. Write a Program to Check if Two Strings are Anagram or Not

#include<iostream>
using namespace std;
#define maxi 256

int main(){
    string n1,n2;
    cin>>n1>>n2;
    int count1[maxi]={0};
    int count2[maxi]={0};
    int i=0;
    for(;n1[i] and n2[i];i++){
        count1[n1[i]]++;
        count2[n2[i]]++;
    }
    if(n1[i] or n2[i]){
        cout<<"false";
        return 0;
    }

    for(i=0;i<maxi;i++){
        if(count1[i]!=count2[i]){
            cout<<"false";
            return 0;
        }
    }

    cout<<"true";
}