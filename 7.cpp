// 7. Write a Program to Find the Length of the String Without using strlen() Function 

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string str;
    cin>>str;
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    cout<<length;
    return 0;
}