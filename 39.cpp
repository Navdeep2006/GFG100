// 39. Write a Program to Check if the Given String is Palindrome or not Using Recursion

#include <iostream>

using namespace std;

bool palindrome(int start, int last,string &str){
    if(last<=start){
        return true;
    }
    if(str[start]!=str[last]){
        return false;
    }
    palindrome(++start,--last,str);
}

int main(){
    string str;
    cin>>str;
    (palindrome(0,str.length()-1,str))?cout<<"yes":cout<<"no";
}