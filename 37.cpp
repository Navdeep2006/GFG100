// 37. Write a Program to Print the Given String in Reverse Order
#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
}