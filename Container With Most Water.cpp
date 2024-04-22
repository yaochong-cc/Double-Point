////
//// Created by Lenovo on 2024/4/22.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//////暴力法：
////class Solution {
////public:
////    int maxArea(vector<int> &height) {
////        int maxV=0;
////        for(int i=0;i<height.size();i++){
////
////            for(int j=i+1;j<height.size();j++) {
////                maxV = max(maxV, min(height[j], height[i]) * (j - i));
////            }
////        }
////        return maxV;
////    }
////};
//
//////改进
////class Solution{
////public:
////    int maxArea(vector<int> &height){
////        int res =0;
////        int curMax=-1;
////        for(int i=0;i<height.size();i++){
////          if(height[i]<=curMax) continue;
////          curMax =height[i];
////          for(int j=i+1;j<height.size();j++){
////             res= max(res, min(height[j], curMax) * (j - i));
////          }
////        }
////        return res;
////    }
////};
//
//////双指针
////class Solution{
////public:
////    int maxArea(vector<int> &height){
////        int res =0;
////        int left =0;int right=height.size()-1;
////        while (left<right){
////            res =max(res,min(height[left],height[right])*(right-left));
///////////////相当于先固定住大的边，使小的那条尽可能大：
////            if(height[left]<height[right]) {
////                left++;
////            }else{
////                right--;
////            }
////        }
////        return res;
////    }
////};
////双指针优化：
//class Solution{
//public:
//    int maxArea(vector<int> &height){
//        int res =0;
//        int left =0;int right=height.size()-1;
//        while (left<right){
//            res =max(res,min(height[left],height[right])*(right-left));
//            if(height[left]<height[right]) {
//                int cur=height[left];//增加一个临时变量
//                while(left<right&&height[left]<=cur){
//                    left++;
//                }
//            }else{
//                int cur=height[right];
//                while(left<right&& height[right]<=cur) right--;
//            }
//        }
//        return res;
//    }
//};
//
//int main() {
//    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//    Solution solution;
//    cout << solution.maxArea(height) << endl;
//    return 0;
//}