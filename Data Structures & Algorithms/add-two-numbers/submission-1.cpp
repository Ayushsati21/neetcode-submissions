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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* prev=NULL;
        int carry=0;
        while(temp1!=NULL&&temp2!=NULL)
        {

            temp1->val=(temp1->val+temp2->val+carry);
            carry=temp1->val/10;
            
            temp1->val=(temp1->val)%10;
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;


        }
        if(temp2!=NULL)
        { if(prev!=NULL){
            prev->next=temp2;
            
                while(temp2!=NULL&&carry!=0)
                {
                    temp2->val=(temp2->val+carry);
                    carry=temp2->val/10;
                    temp2->val=(temp2->val)%10;
                    prev=temp2;
                    temp2=temp2->next;
                }
            }
            else
            {
                return temp2;
            }
            
            
        }
        else if(temp1!=NULL)
        {
             
                while(temp1!=NULL&&carry!=0)
                {
                    temp1->val=(temp1->val+carry);
                    carry=(temp1->val)/10;
                    temp1->val=(temp1->val)%10;
                    prev=temp1;
                    temp1=temp1->next;
                }
            
        }
            if(carry>0)
            {
               ListNode* newNode = new ListNode{carry, nullptr};
               prev->next=newNode;
            }
    

        return l1;
    }
};
