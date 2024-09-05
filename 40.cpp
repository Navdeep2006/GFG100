// 40. Write a Program to Calculate the Length of the String Using Recursion

#include<iostream>

using namespace std;

void length(string &str,int idx,int &count){
    if(str[idx]=='\0') return;
    length(str,++idx,++count);
}

int main(){
    string str;
    cin>>str;
    int count=0;
    length(str,0,count);
    cout<<count;

}