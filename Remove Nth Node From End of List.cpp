https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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

//Approach 1: Two pass Algorithm
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int length = 0;
//         ListNode* currentNode = head;
        
//         //find length of node
//         while(currentNode != NULL){
//             currentNode = currentNode->next;
//             length++;
//         }
        
//         //if lenghth==n
//         if(length == n){
//             return head->next;
//         }
        
//         //find node to remove - index = length-n-1
//         int nodeBeforeRemovedIndex = length-n-1;
//         currentNode = head;
//         for(int i=0; i<nodeBeforeRemovedIndex; i++){
//             currentNode = currentNode->next;
//         }
//         currentNode->next = currentNode->next->next;
//         return head;
        
        
//     }
// };

// // Approach 2: One pass Algorthm
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* currentNode = head;
//         // move currentNode to n steps
//         for(int i=0; i<n; i++){
//             currentNode = currentNode->next;
//         }
        
//         // if n == size of linkedlist
//         if(currentNode==NULL){
//             return head->next;
//         }
        
//         ListNode* removeNthNode = head;
        
//         //move the currentNode till the last node
//         while(currentNode->next != NULL){
//             currentNode = currentNode->next;
//             removeNthNode = removeNthNode->next;
//         }
        
//         //deleting operation
//         removeNthNode->next = removeNthNode->next->next;
//         return head;
        
//     }
// };


// Approach 2: One pass Algorthm (Striver code - just for practice)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        // cout << "Start value " << start->val << endl;
        start->next = head;
        ListNode* fast = start;
        ListNode* slow = start;
        
        for(int i=1; i<=n; i++){
            fast = fast->next;
        }
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return start->next;
        
    }
};
