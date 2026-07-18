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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for(ListNode* temp:lists){
            ListNode*curr=temp;
            while(curr!=NULL){
                arr.push_back(curr->val);
                curr=curr->next;
            }
            
        }
        sort(arr.begin(),arr.end());
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        for(int val:arr){
            ListNode*newNode=new ListNode(val);
            tail->next=newNode;
            tail=tail->next;
        }
        return dummy->next;
    }
};
