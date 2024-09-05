// 26. Write a Program to Check if the Given String is Palindrome or Not
#include<iostream>

using namespace std;

int main(){
    string n;
    cin>>n;
    bool flag=1;
    for(int i=0;i<n.length();i++){
        if(n[i]!=n[n.length()-1-i]){
            flag=0;
            break;
        }
    }
    cout<<flag;
}