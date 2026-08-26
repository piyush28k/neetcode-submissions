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
         vector<ListNode*>arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp);
            temp=temp->next;
        }

        int n=arr.size();
        int l=0,r=n-1;
        bool flag = true;

        while(l<r){
            if(flag==true){
                arr[l]->next=arr[r];
                flag=!flag;
                l++;
            }else{
                arr[r]->next=arr[l];
                flag=!flag;
                r--;
            }
        }

        arr[l]->next=NULL;

        return;
    }
};
