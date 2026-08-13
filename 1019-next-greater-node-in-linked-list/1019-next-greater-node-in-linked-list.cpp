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
    vector<int> nextLargerNodes(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return {0};
        }
        vector<int> temp;
        ListNode* curr = head;
        ListNode* nexti = curr->next;
        while (curr != NULL) {
            nexti = curr->next;
            bool found = false;
            while (nexti != NULL) {
                if (curr->val < nexti->val) {
                    temp.push_back(nexti->val);
                    found = true;
                    break;
                }
                nexti = nexti->next;
            }
            if (found == false) {
                temp.push_back(0);
            }
            curr = curr->next;
        }
        return temp;
    }
};