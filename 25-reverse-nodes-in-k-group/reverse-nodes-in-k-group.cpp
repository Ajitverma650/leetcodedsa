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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode*temp=head;
        int c=0;

    while(c<k){
     if(temp==nullptr)
       return head;
       temp=temp->next;
       c++;
    }

    ListNode * prev=reverseKGroup(temp,k);
    temp=head; 
    c=0;
      while(c<k)
    {
        ListNode*next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        c++;
        


    }


      return prev;  
        
    }
};