//
// Created by Lenovo on 2024/4/27.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//    void rotate (vector<int> &nums ,int k){
//        vector<int> res(nums.size());//一定要规定数组长度：
//        for(int i=0;i<nums.size();i++){
//            res[(i+k)%nums.size()]=nums[i];
//        }
//        for(int i=0;i<nums.size();i++){
//            nums[i]=res[i];
//        }
//    }
//};

//// 数组翻转
//class Solution {
//public:
//    void rotate (vector<int> &nums ,int k){
//        int n=nums.size();
//        for(int start=0,cnt=0;cnt<n;start++){
//            int cur=start;
//            int temp=nums[cur];
//            do{
//                int next =(cur+k)%n;
//                swap(nums[next],temp);
//                cur=next;
//                cnt++;
//            }while(cur!=start);
//        }
//    }
//};

//翻转再翻转
class Solution {
public:
    void rotate (vector<int> &nums ,int k){
        int n =nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k%n);
        reverse(nums.begin()+k%n,nums.end());
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
