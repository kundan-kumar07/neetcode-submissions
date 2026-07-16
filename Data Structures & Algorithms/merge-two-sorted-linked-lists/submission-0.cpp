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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode*temp=list1;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(),arr.end());
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        for(int val:arr){
            ListNode*newList=new ListNode(val);
            tail->next=newList;
            tail=tail->next;
        }
        return dummy->next;

        
    }
};
