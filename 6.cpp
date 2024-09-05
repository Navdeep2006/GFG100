// 6. Write a Program to Print Check Whether a Character is an Alphabet or Not
#include<iostream>
#include<cctype>

// using namespace std;

int main(){
    char ch;
    
    std::cin>>ch;

    isalpha(ch)?std::cout<<"alphabet" : std::cout<<"not alphabet";
}