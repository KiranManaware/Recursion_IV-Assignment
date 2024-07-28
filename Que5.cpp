#include<iostream>
#include <vector>
// Program to convert a decimal number to binary.
using namespace std;
int decimalToBinary(int n,int num){
    if(n==1) return num;
    int mod=n%2;
    num=num*10+mod;
    decimalToBinary(n/2,num);
}
int main()
{
    int n=5;
    cout<<decimalToBinary(n,1);
    return 0;
}