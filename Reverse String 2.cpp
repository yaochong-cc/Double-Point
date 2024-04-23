////
//// Created by Lenovo on 2024/4/23.
////
//
//#include <iostream>
//#include<algorithm>
//#include <string>
//
//using namespace std;
//
////class Solution {
////public:
////    string reverseString(string s,int k) {
////        for(int i=0;i<s.size();i+=(2*k)){
////            if(i+k<s.size()){
////                reverse(s.begin()+i,s.begin()+i+k);
////            }
////            else{
////                reverse(s.begin()+i,s.end());
////            }
////        }
////        return s;
////    }
////};
//
////class Solution {
////public:
////    string reverseStr(string s, int k) {
////        int n = s.size(),pos = 0;
////        while(pos < n){
////            //剩余字符串大于等于k的情况
////            if(pos + k < n) reverse(s.begin() + pos, s.begin() + pos + k);
////                //剩余字符串不足k的情况
////            else reverse(s.begin() + pos,s.end());
////            pos += 2 * k;
////        }
////        return s;
////    }
////};
//
////
//class Solution{
//public:
//    string reverseStr(string s,int k){
//        int n=s.size();
//        for(int i=0;i<n;i+=(2*k)){
//            reverse(s.begin()+i,s.begin()+min(i+k,n));
//        }
//        return s;
//    }
//};
//
//int main() {
//    Solution s;
//    string str = "hello";
//    int k = 2;
//    string res = s.reverseStr(str,k);
//    cout<<res<<endl;
//    return 0;
//}