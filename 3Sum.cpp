////
//// Created by Lenovo on 2024/4/23.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//
//using namespace std;
//
//////双指针法
////class Solution {
////public:
////    vector<vector<int>> threeSum(vector<int> &nums) {
////        int n=nums.size();
////        vector<vector<int>> res;
////        sort(nums.begin(),nums.end());
////
////        for(int i=0;i<n;i++) {
////            int left = i + 1;
////            int right = n - 1;
////            if (i != 0 && nums[i] == nums[i - 1]) continue;//跳过重复的数字
////
////            while (left < right) {
////                if (nums[i] + nums[left] + nums[right] < 0) {
////                    left++;
////                } else if (nums[i] + nums[left] + nums[right] > 0) {
////                    right--;
////                } else {
////                    res.push_back({nums[i], nums[left], nums[right]});
////
////                    for (++left; left < right && nums[left] == nums[left - 1]; ++left); // 跳过重复数字
////                    for (--right; right > left && nums[right] == nums[right + 1]; --right); // 跳过重复数字
////
////                }
////            }
////        }
////        return res;
////    }
////};
//
//////优化：
////class Solution {
////public:
////    vector<vector<int>> threeSum(vector<int> &nums) {
////        int n=nums.size();
////        vector<vector<int>> res;
////        sort(nums.begin(),nums.end());
////
////        for(int i=0;i<n;i++) {
////            int left = i + 1;
////            int right = n - 1;
////            if (i != 0 && nums[i] == nums[i - 1]) continue;//跳过重复的数字
////
////            if (nums[i] + nums[i + 1] + nums[i + 2] > 0) break; // 优化一
////            if (nums[i] + nums[n - 2] + nums[n - 1] < 0) continue; // 优化二
////
////
////            while (left < right) {
////                if (nums[i] + nums[left] + nums[right] < 0) {
////                    left++;
////                } else if (nums[i] + nums[left] + nums[right] > 0) {
////                    right--;
////                } else {
////                    res.push_back({nums[i], nums[left], nums[right]});
////
////                    for (++left; left < right && nums[left] == nums[left - 1]; ++left); // 跳过重复数字
////                    for (--right; right > left && nums[right] == nums[right + 1]; --right); // 跳过重复数字
////
////                }
////            }
////        }
////        return res;
////    }
////};
//
//
////哈希法
////看不懂，待研究
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> result;
//        sort(nums.begin(), nums.end());
//        // 找出a + b + c = 0
//        // a = nums[i], b = nums[j], c = -(a + b)
//        for (int i = 0; i < nums.size(); i++) {
//            // 排序之后如果第一个元素已经大于零，那么不可能凑成三元组
//            if (nums[i] > 0) {
//                break;
//            }
//            if (i > 0 && nums[i] == nums[i - 1]) { //三元组元素a去重
//                continue;
//            }
//            unordered_set<int> set;
//            for (int j = i + 1; j < nums.size(); j++) {
//                if (j > i + 2
//                    && nums[j] == nums[j-1]
//                    && nums[j-1] == nums[j-2]) { // 三元组元素b去重
//                    continue;
//                }
//                int c = 0 - (nums[i] + nums[j]);
//                if (set.find(c) != set.end()) {
//                    result.push_back({nums[i], nums[j], c});
//                    set.erase(c);// 三元组元素c去重
//                } else {
//                    set.insert(nums[j]);
//                }
//            }
//        }
//        return result;
//    }
//};
//
//int main(){
//    Solution s;
//    vector<int> nums = {-1,0,1,2,-1,-4};
//    vector<vector<int>> res = s.threeSum(nums);
//    for(auto i:res) {
//        for (auto j: i) {
//            cout << j << " ";
//        }
//    }
//}