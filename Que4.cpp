// Program to find the factorial of a given number.
#include<iostream>
#include <vector>
#include<climits>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
   int n=4;
   cout<<fact(n);
}