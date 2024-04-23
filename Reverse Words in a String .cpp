//
// Created by Lenovo on 2024/4/23.
//
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        int n=s.size();
        int index=0;

        for(int start=0;start<n;++start){
            if(s[start]!=' '){
                if(index!=0) s[index++]=' ';

                int end =start;
                while (end <n && s[end]!=' ') s[index++] =s[end++];

                reverse(s.begin()+index-(end-start),s.begin()+index);

                start =end;//更新下一个词
            }
        }
        s.erase(s.begin()+index,s.end());
        return s;
    }
};

int main(){
    Solution s;
	string str="Let's take LeetCode contest";
	cout<<s.reverseWords(str)<<endl;

    return 0;
}