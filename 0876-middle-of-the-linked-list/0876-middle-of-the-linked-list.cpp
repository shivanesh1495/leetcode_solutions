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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr=head;
        int i=1;
        while(curr->next!=NULL){
            i++;
            curr=curr->next;
        }
        int m=(i/2)+1;
        ListNode *curr1=head;
        while(m!=1){
            curr1=curr1->next;
            m--;
        }
        return curr1;
        
    }
};