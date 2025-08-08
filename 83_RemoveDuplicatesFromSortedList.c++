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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        int actualValue = head->val;
        ListNode* lastNode = head;
        while(lastNode->next != nullptr) {
            if (actualValue != lastNode->next->val) {
                actualValue = lastNode->next->val;
                lastNode = lastNode->next;
            } else  {
                lastNode->next = lastNode->next->next; 
            }
        }
        return head;
    }
};