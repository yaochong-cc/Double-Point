////
//// Created by Lenovo on 2024/4/23.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//////哈希法
//////看不懂思密达
////class Solution {
////public:
////    vector<int> twoSum(vector<int>& nums, int target) {
////        unordered_map<int, int> hash;
////        for (int i = 0; i < nums.size(); i++) {
////            int complement = target - nums[i];
////            if (hash.count(complement)) {
////                return {hash[complement], i};
////            }
////            hash[nums[i]] = i;//将当前元素和索引存入哈希表
////        }
////        return {};
////    }
////};
//
////双指针：
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        int n=nums.size();
//        int left =0;int right =n-1;
//
//        while(left<right){
//            if(nums[left]+nums[right]<target) ++left;
//            if(nums[left]+nums[right]>target) --right;
//            if(nums[left]+nums[right]==target) break;
//        }
//
//        return {left+1,right+1};
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> nums = {2, 7, 11, 15};
//    int target = 9;
//    vector<int> result = solution.twoSum(nums, target);
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << " ";
//    }
//    return 0;
//}