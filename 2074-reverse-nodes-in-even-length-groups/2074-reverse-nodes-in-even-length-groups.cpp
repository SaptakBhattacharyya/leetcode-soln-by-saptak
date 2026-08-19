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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev= nullptr;
        int grpsize=1;
        
        while(curr!=NULL){
            ListNode* groupStart=curr;
            int count=0;
            while(curr!=NULL && count < grpsize){
                curr=curr->next;
                count++;
                
            }
            if(count%2==0){

             ListNode* groupPrev = curr;
                ListNode* groupCurr = groupStart;
                for (int i = 0; i < count; i++) {
                    ListNode* next = groupCurr->next;

                    groupCurr->next = groupPrev;

                    groupPrev = groupCurr;
                    groupCurr = next;
                }
                 if (prev != nullptr) {
                    prev->next = groupPrev;
                } else {
                    head = groupPrev;
                }
                prev = groupStart;
            }
            else{
                prev=groupStart;
                for(int i=1;i<count;i++){
                    prev=prev->next;
                }
            }
            grpsize++;
        }
        return head;
    }
};