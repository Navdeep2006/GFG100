//38. Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include <iostream>

using namespace std;

void reverse(int start,int last,string &str){
    if(start>=last){
        return;
    }
    swap(str[start],str[last]);
    reverse(++start,--last,str);
}

int main(){
    string str;
    cin>>str;
    reverse(0,str.length()-1,str);
    cout<<str;
}