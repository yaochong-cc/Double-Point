//
// Created by Lenovo on 2024/4/22.
//
#include <iostream>
#include <vector>
using namespace std;
//暴力：
class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size();
        vector<int> moveZero;
        for(int num:nums){
            if(num!=0){
                moveZero.push_back(num);
            }
        }
        for(int i=0;i<moveZero.size();i++){
            nums[i]=moveZero[i];
        }
        for(int i=moveZero.size();i<n;i++){
            nums[i]=0;
        }
    }
};


////双指针法
//class Solution{
//public:
//    void moveZeroes (vector<int> &nums){
//        int n =nums.size();
//        int left=0;
//        int right=0;
//        while(right<n){
//            if(nums[right]!=0){
//                nums[left]=nums[right];
//                left++;
//            }
//            right++;
//        }
//        while(left<n){
//            nums[left]=0;
//            left++;
//        }
//    }
//};
////双指针改进：
//class Solution{
//public:
//    void moveZeroes (vector<int> &nums){
//        int n =nums.size();
//        int left=0;
//        int right=0;
//        while(right<n){
//            if(nums[right]!=0){
//                swap(nums[left],nums[right]);
//                left++;
//            }
//            right++;
//        }
//
//    }
//};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}