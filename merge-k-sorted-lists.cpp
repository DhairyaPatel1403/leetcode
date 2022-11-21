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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* ptr3=dummy;
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        while(l1 && l2){
            if(l1->val<l2->val){
                ptr3->next=l1;
                l1=l1->next;
                ptr3=ptr3->next;
            }
            else{
                ptr3->next=l2;
                l2=l2->next;
                ptr3=ptr3->next;
            }
        }
        if(l1!=NULL){
            ptr3->next=l1;
            l1=l1->next;
            ptr3=ptr3->next;
        }
        else if(l2!=NULL){
            ptr3->next=l2;
            l2=l2->next;
            ptr3=ptr3->next;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
        while(lists.size()>1){
            lists.push_back(merge(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
};