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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
       ListNode*temp=head;
       while(temp!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
       }
       int i=left-1;
       int j=right-1;
       while(i<j){
       swap(v[i],v[j]);
       i++;
       j--;
       }
       temp=head;
              for(int i=0;i<v.size();i++){
             temp->val=v[i];
               temp=temp->next;
       }
return head;
    }
};