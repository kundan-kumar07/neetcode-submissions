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
    void reorderList(ListNode* head) {
        vector<int> arr;
        ListNode*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;

        }
        vector<int> updated;
        int l=0;
        int r=arr.size()-1;
        while(l<r){
            updated.push_back(arr[l]);
            updated.push_back(arr[r]);
            l++;
            r--;
            
        }
        if(arr.size()%2!=0){
            updated.push_back(arr[l]);

        }
        
        temp=head;
        for(int ans:updated){
            temp->val=ans;
            temp=temp->next;

        }
        
        
    }
};
