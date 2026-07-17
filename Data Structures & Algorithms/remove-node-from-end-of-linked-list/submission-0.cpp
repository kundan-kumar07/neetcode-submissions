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
        vector<int> arr;
        ListNode*temp=head;
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int len=arr.size();
        int target=len-n;

        for(int i=0;i<len;i++){
            if(i!=target){
                ListNode*newNode=new ListNode(arr[i]);
                tail->next=newNode;
                tail=tail->next;
                

            }


        }
        return dummy->next;
        
    }
};
