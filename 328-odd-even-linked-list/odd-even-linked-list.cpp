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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr||head->next->next==nullptr)
        return head;
        ListNode*odd=new ListNode(0);
        ListNode*od=odd;
        ListNode*even=new ListNode(0);
        ListNode*ev=even;
        ListNode*temp=head;
        ListNode*temp1=head->next;
        while(temp1!=nullptr&&temp1->next!=nullptr)
        {
            od->next=temp;
            ev->next=temp1;
            temp=temp->next->next;
            temp1=temp1->next->next;
            od=od->next;
            ev=ev->next;

        }
        if(temp!=nullptr)
        {
            od->next=temp;
            od=od->next;
        }
        if(temp1!=nullptr)
        {
            ev->next=temp1;
            ev=ev->next;
        }

        od->next=even->next;
        ev->next=nullptr;
        return odd->next;
    }
};