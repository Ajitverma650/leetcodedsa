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
   ListNode *reverse(ListNode * head)
   {
       
         if(head==nullptr || head ->next ==nullptr ) return head;
        
          ListNode *newhead =reverse(head->next);
        
           head->next->next=head;
           head->next=nullptr;
           
          return newhead;
   }
    void reorderList(ListNode* head) {
        
        if(head==nullptr || head->next==nullptr)  return ;
                ListNode *slow=head;
        ListNode *fast=head;
         ListNode *prev=nullptr;
        while(fast!=nullptr && fast->next!=nullptr)
        {      prev=slow;
              slow=slow->next;

              fast=fast->next->next;
            
        }
       if(prev) prev->next=nullptr;
        ListNode*head2=reverse(slow);
    
        ListNode*temp=head;
        ListNode*temp1=head2;
        while(temp!=nullptr &&temp1 !=nullptr)
        {
                ListNode *next1=temp->next;
                ListNode * next2=temp1->next;

               temp->next=temp1;
                if(next1) temp1->next=next1;
               temp=next1;
               temp1=next2;
               
               
        }
         

         


         

        
    }
};