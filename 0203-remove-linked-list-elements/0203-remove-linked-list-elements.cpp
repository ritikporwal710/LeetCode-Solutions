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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = head;

        int f=0;
        if(!head) return head;
        ListNode *res, *ans;


        while(temp){
            if(temp->val != val && f==0 ){
                ListNode *start = new ListNode(temp->val);
                ans = start;
                temp = temp->next;
                res = ans;
                f=1;
            }
            else if(temp->val != val){
                ListNode *one = new ListNode(temp->val);
                ans->next = one;
                ans = ans->next;
                temp = temp->next;
            }
            else 
            temp = temp->next;
        }

        return res;
    }
};