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
        ListNode *temp = head, *curr = head;
        if(temp == NULL || temp->next == NULL) return head;
        ListNode *prev = NULL;
        while(curr){
            temp = curr;
            curr = curr->next;
            temp->next = prev;
            prev = temp;
        }

        return prev;
    }
};