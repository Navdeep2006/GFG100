// 42. Write a Program to Count the Sum of Numbers in a String

#include <iostream>
using namespace std;


int main(){
    string str;
    cin>>str;
    int sum=0;
    for(char c: str){
        if('0' <= c && c <= '9'){
            sum+=int(c)-int('0');
        }
    }
    cout<<sum;
}