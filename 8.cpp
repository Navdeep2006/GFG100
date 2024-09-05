// 8. Write a Program to Toggle Each Character in a String 

#include<iostream>
#include<cstring>

using namespace std;
void build_in(string &str){
    for(int i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]=_toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
}

void idiot(string &str){
    int diff= (int)'a'-(int)'A';
    int a=(int)'a',z=(int)'z',A=(int)'A',Z=(int)'Z';
    for(int i=0;str[i]!='\0';i++){
        if(a<=(int)str[i] and (int)str[i]<=z){
            str[i]=(char)(((int)str[i])-diff);
        }else if(A<=(int)str[i] and (int)str[i]<=Z){
            str[i]=(char)(((int)str[i])+diff);
        }
    }
}

int main(){
    string str;
    cin>>str;
    idiot(str);
    cout<<str;
}