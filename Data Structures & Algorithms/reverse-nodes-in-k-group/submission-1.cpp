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
    void rev(ListNode** h,ListNode** t)
    {
        ListNode* temp=(*t)->next;
        ListNode* prev=temp,*curr=*h,*forward=NULL;
        while(curr!=temp)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        *t=*h;
        *h=prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* temp=head,*temp2=NULL,*connect=NULL;
        int count=1,j=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        temp=head,temp2=head;
        while(count>=k)
        {
            int i=1;
            while(i<k)
            {
                temp2=temp2->next;
                i++;
            }
            rev(&temp,&temp2);
            if(j)
            {
                head=temp;
             connect=temp2;
                j--;
            }
            else
            {
                connect->next=temp;
                connect=temp2;
            }
            temp2=temp2->next;
            temp=temp2;
            count=count-k;
        }
        return head;

    }
};
