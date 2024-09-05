// 11. Write a Program to Remove All Characters From a String Except Alphabets

#include<iostream>
#include<cctype>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    string result="";
    for(char c: str){
        if(isalpha(c)){
            result+=c;
        }
    }
    cout<<result;
}