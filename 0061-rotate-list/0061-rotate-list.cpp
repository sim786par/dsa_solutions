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
        if(head == NULL || head->next ==NULL){
            return head;
        }
        int len =0;
        ListNode* curr = head;
        while(curr != NULL){
            len++;
            curr = curr->next;
        }
        k = k % len;
        while(k--){
             ListNode* tail = head;
            ListNode* prev = NULL;

            while(tail->next != NULL) {
                prev = tail;
                tail = tail->next;
            }

            prev->next = NULL;
            tail->next = head;
            head = tail;
        }

        return head;
    }
};