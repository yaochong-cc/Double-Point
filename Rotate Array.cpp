//
// Created by Lenovo on 2024/4/27.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate (vector<int> &nums ,int k){
        vector<int> res(nums.size());//一定要规定数组长度：
        for(int i=0;i<nums.size();i++){
//            if(i+k<=nums.size()) res[i+k-1]=nums[i];
//            else if(i+k>nums.size()) res[i+k-nums.size()]=nums[i];
            res[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=res[i];
        }
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    sol.rotate(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
