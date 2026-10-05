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
    bool isPalindrome(ListNode* head) {
      vector<int>v;
      ListNode*temp=head;
      while(temp!=NULL){
         v.push_back(temp->val);
         temp=temp->next;
      }
      vector<int>s;
      for(int i=v.size()-1;i>=0;i--){
        s.push_back(v[i]);
      }
      for(int i=0;i<v.size();i++){
        if(v[i]!=s[i]){
            return false;
        }
      }
      return true;
    }
};