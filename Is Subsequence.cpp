//
// Created by Lenovo on 2024/4/28.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//class Solution {
//public:
//    bool isSubsequence(string s, string t) {
//        if(s=="") return true;
//        int j=0;
//        for(int i=0;i<t.size();i++){
//            if(j<s.size()&& s[j]==t[i]){
//                j++;
//                if(j==s.size()) {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        int j=0;
        for(char c:t){
            if(j<s.size()&& s[j]==c){
                j++;
                if(j==s.size()) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    string s1 = "abc";
    string t1 = "ahbgdc";
    cout<<s.isSubsequence(s1,t1)<<endl;
    return 0;
}