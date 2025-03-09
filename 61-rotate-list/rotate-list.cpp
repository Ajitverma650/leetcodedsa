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
    ListNode* rotateRight(ListNode* head, int k) {
        

        ListNode* temp=head;
        int l=0;
        if(head==nullptr || k==0 ) return head;
        while(temp!=nullptr)
        {
              temp=temp->next;
              l++;
        }
        int r=k%l;
        if(r==0) return head;
        int c=l-r;
         ListNode * curr=head;
        while(c>1 &&curr!=nullptr)
        {
             curr=curr->next;
             c--;
        }
        temp=curr->next;
        curr->next=nullptr;
        ListNode *temp1=temp;
        while(temp->next!=nullptr)
        {
             temp=temp->next;
        }
        temp->next=head;
        return temp1;
    }
};