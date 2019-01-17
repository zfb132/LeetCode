/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result=new ListNode(0);
        result->val=5;
        ListNode* curr=result;
        for(int i=0;i<9;i++){
            ListNode* temp=new ListNode(0);
            temp->val=i;
            temp->next=NULL;
            curr->next=temp;
            curr=temp;
        }
        return result;
    }
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* curr = result, *n1 = l1, *n2 = l2;
        // c是单次相加的进位；a，b是为了长度不同时候添的
        int sum = 0, a = 0, b = 0, c = 0;
        while(n1 != NULL || n2 != NULL){
            // 考虑两者长度不同
            if(n1==NULL){
                a = 0;
            }else{
                a = n1->val;
                n1 = n1->next;
            }
            if(n2==NULL){
                b = 0;
            }else{
                b = n2->val;
                n2 = n2->next;
            }
            sum = a + b + c;
            c = sum/10; sum = sum%10;
            ListNode* temp=new ListNode(sum);
            curr->next=temp;
            curr=temp;
        }
        if(c!=0){
            ListNode* temp=new ListNode(c);
            curr->next=temp;
            curr=temp;
        }
        return result->next;
    }
};