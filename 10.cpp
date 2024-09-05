// 10. Write a Program to Remove the Vowels from a String

#include<iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='A' or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U');
        else{
            str[j++]=str[i];
        }
    }
    while(j<str.length()){
        str[j]='\0';
        j++;
    }

    cout<<str;
}