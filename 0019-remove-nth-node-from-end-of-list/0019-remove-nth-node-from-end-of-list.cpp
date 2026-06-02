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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int i=1;
        while(curr->next!=NULL){
            i++;
            curr=curr->next;
        }
        int k=i-n+1;
        int j=1;
        curr = head;
        if(k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while(j+1!=k){
            curr=curr->next;
            j++;
        }
        ListNode* temp = curr->next;
        curr->next =temp->next;
        delete temp;

        return head;

        
    }
};