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
    ListNode* swapPairs(ListNode* head) {
         if(head==nullptr||head->next==nullptr)return head;
        ListNode *temp=head;
        ListNode * curr=head->next;

        temp->next=curr->next;
        curr->next=temp;

        temp->next=swapPairs(curr->next->next);

        
        return curr;
       


        
    }
};