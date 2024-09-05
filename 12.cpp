// 12. Write a Program to Remove Spaces From a String

#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string result;
    for(char c:str){
        if(isblank(c));
        else{
            result+=c;
        }
    }
    cout<<result;
}