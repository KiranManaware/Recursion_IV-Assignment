// Given an integer array containing unique numbers, return power set, containing all the subsets of
// the set. [Leetcode 78]
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
#include<iostream>
#include <vector>
using namespace std;
void subset(vector<vector<int>> &ans,vector<int> v,vector<int> nums, int idx){
    if(idx==nums.size()){
        ans.push_back(v);
        return;
    }
    subset(ans,v,nums,idx+1);
    v.push_back(nums[idx]);
    subset(ans,v,nums,idx+1);
}
int main()
{
    vector<int> nums={1,2,3};
    vector<int> v;//empty vector
    vector<vector<int>> ans;
    subset(ans,v,nums,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}