/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        
        ListNode * pr = new ListNode();
        ListNode * ne = new ListNode();
        pr = nullptr;
        ne = head->next;
        while(ne!=nullptr){
            head->next = pr;
            pr = head;
            head = ne;
            ne = ne->next;
        }
        head->next = pr;
    
    return head;
    }
};