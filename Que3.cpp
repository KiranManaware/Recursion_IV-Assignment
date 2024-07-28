#include <vector>
#include<iostream>
using namespace std;
// Given a string, find the length of the longest common substring from two given strings.
int  helper(string text1, string text2,int i,int j){
    if(text1[i]=='\0' || text2[j]=='\0')
    return 0;
    else if(text1[i]==text2[j]){
        return 1+helper(text1,text2,i+1,j+1);
    }
    else{
        return max(helper(text1,text2,i+1,j),helper(text1,text2,i,j+1));

    }
}
int main()
{
    string a="abcde";
    string b="ace";
    cout<<helper(a,b,0,0);
    return 0;
}