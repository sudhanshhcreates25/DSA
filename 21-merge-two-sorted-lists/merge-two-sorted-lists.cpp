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
        vector<int>sr;
        ListNode* temp=list1;
        ListNode* temp2=list2;
        while(temp!=nullptr){
            sr.push_back(temp->val);
            temp=temp->next;
        }
        while(temp2!=nullptr){
            sr.push_back(temp2->val);
            temp2=temp2->next;

        }
        sort(sr.begin(),sr.end());
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        for(int i=0;i<sr.size();i++){
            ListNode* newNode = new ListNode(sr[i]);
            if(head==nullptr){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
        }
    return head;
    }
};