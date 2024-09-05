// 48. Write a Program for Octal to Decimal Conversion

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int deci=0,place=0;
    while (n>0){
        deci+=pow(8,place++)*(n%10);
        n/=10;
    }
    cout<<deci;
}