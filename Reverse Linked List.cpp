////
//// Created by Lenovo on 2024/4/21.
////
//#include <iostream>
//using namespace std;
//
//
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* temp;
//        ListNode* pre=NULL;
//        ListNode* cur=head;
//        while (cur){
//            temp=cur->next;
//            cur->next = pre;
//            pre =cur ;
//            cur =temp;
//        }
//        return pre;
//    }
//};
//
//int main() {
//    Solution s;
//    ListNode* head = new ListNode(1);
//    head->next = new ListNode(2);
//    head->next->next = new ListNode(3);
//    head->next->next->next = new ListNode(4);
//    ListNode* res = s.reverseList(head);
//    while (res) {
//        cout << res->val << " ";
//        res = res->next;
//    }
//    return 0;
//}