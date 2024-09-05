// 9. Write a Program to Count the Number of Vowels 
#include<iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int vowels=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='A' or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U'){
            vowels++;
        }
    }
    std::cout<<vowels;
}