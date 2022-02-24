// https://leetcode.com/problems/reverse-linked-list/
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

// Self code
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next;
        
//         while(curr != NULL){
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
// };

// Striver code (For Practice)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* newHead = NULL;
//         while(head!=NULL){
//             ListNode* next = head->next;
//             head->next = newHead;
//             newHead = head;
//             head = next;
//         }
//         return newHead;
//     }
// };

//Recursive Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* headNext = head->next;
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};