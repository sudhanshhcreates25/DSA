/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr){
            return nullptr;
        }
        vector<ListNode*>cycle;
        ListNode* temp=head;
        int i=0;
        while(temp!=nullptr){
            if(find(cycle.begin(),cycle.end(),temp)!=cycle.end()){
                return temp;
                
            }
            else{
                cycle.push_back(temp);
                temp=temp->next;
                
            }
        }
        return nullptr;
        
    }
};