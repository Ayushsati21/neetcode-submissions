/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListListNode *next;
 *     ListListNode() : val(0), next(nullptr) {}
 *     ListListNode(int x) : val(x), next(nullptr) {}
 *     ListListNode(int x, ListListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  ListNode* rev(ListNode*head)
{
    
    ListNode* curr=head->next;
    ListNode* prev=NULL;
    
    if((head)->next==NULL){
        return head ;
    }
    else
    {
        curr=head;
        while(curr!=NULL)
        {
             ListNode*forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
    
        return prev;

    }
}
ListNode* mid(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = (head)->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
    void reorderList(ListNode* head) 
    {
         if (head == NULL || head->next == NULL) {
            return;
        }

        ListNode* middle = mid(head);
        ListNode* tail = middle->next;
        middle->next = NULL;

        tail=rev(tail);
        ListNode* t1=head,*t2=tail;
        while(t2!=NULL)
        {
            
            ListNode* next1=t1->next,*next2=t2->next;
            t1->next=t2;
           
          t2->next=next1;
          t1=next1;
          t2=next2;
        }
        
    }
};
