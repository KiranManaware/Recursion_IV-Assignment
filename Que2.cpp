// Given an integer array which may contain duplicate numbers, return power 
// set, containing all the subsets of the set. [Leetcode 90]
// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subset(vector<int> nums, int idx,vector<int> temp,vector<vector<int>> &ans){
    ans.push_back(temp);
    for(int i=idx;i<nums.size();i++){
        if(i!=idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[idx]);
        subset(nums,i+1,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int>> go(vector<int> &nums){
    sort(nums.begin(),nums.end());
    vector<int> temp;//empty vector
    vector<vector<int>> ans;
    subset(nums,0,temp,ans);
    return ans;
}
int main()
{
    vector<int> nums={1,2,2};
    vector<vector<int>> ans=go(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}