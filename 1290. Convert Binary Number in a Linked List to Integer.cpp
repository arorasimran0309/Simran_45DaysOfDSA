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
    int getDecimalValue(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev = NULL;
        
        while(curr!=NULL)
        {
            ListNode *ocn = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ocn;
        }
        head = prev;
        
        int i=0;
        curr=prev;
        int dec=0;
        while(curr!=NULL)
        {
            dec+=(curr->val * (pow(2,i)));
            i++;
            curr=curr->next;
        }
        return dec;
        
    }
};
