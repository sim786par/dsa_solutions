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
        // ListNode* temp = head;
        // int len = 0;
        // ListNode* curr = head;
        // ListNode* prev = head;
        // while (temp != NULL) {
        //     temp = temp->next;
        //     len++;
        // }
        // if (len == 1) {
        //     delete head;
        //     return NULL;
        // }
        // if (len == n) {
        //     curr = head;
        //     head = head->next;
        //     delete curr;
        //     return head;
        // }
        // int currlen = 0, diff = 0;
        // while (diff != n) {
        //     prev = curr;
        //     curr = curr->next;
        //     currlen++;
        //     diff = len - currlen;
        // }
        // prev->next = curr->next;
        // delete curr;
        // return head;

        // fast and slow method
        ListNode* a = new ListNode(0);
        a->next = head;
        ListNode* fast = a;
        ListNode* slow = a;
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return a->next;
    }
};