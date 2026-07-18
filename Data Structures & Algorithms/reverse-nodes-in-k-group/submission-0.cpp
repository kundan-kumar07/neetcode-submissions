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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        ListNode*temp=head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;

        }

        for(int i=0;i+k<=arr.size();i+=k){
            reverse(arr.begin()+i,arr.begin()+i+k);
        }

        for(int val:arr){
            ListNode*newNode=new ListNode(val);
            tail->next=newNode;
            tail=tail->next;
        }
        return dummy->next;
        
    }
};
