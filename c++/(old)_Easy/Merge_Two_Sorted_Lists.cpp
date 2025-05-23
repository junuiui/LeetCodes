#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};

class Solution{
    public:
        ListNode* merge(ListNode* list1, ListNode* list2) {

            // initiallize the head
            // head node to start of
            ListNode* ans = new ListNode();

            // pointer
            ListNode* head = ans;

            string k = " ";        

            while(list1 && list2){
                if(list1->val <= list2->val){
                    ans->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else{
                    ans->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                ans = ans->next;
            }
            while(list1){
                ans->next = new ListNode(list1->val);
                list1 = list1->next;
                ans = ans->next;
            }
            while(list2){
                ans->next = new ListNode(list2->val);
                list2 = list2->next;
                ans = ans->next;
            }
            return head->next;
        }
};

int main(){

    //test 1
    ListNode* n2 = new ListNode(4);
    ListNode* n = new ListNode(2, n2);
    ListNode* list1 = new ListNode(1, n);

    ListNode* n4 = new ListNode(4);
    ListNode* n3 = new ListNode(3, n4);
    ListNode* list2 = new ListNode(1, n3);

    cout << "List1 : " << list1->val << " " << list1->next->val << " " << list1->next->next->val << endl;
    cout << "List2 : " << list2->val << " " << list2->next->val << " " << list2->next->next->val << endl;



    return 0;
}

/*

Instruction from LeetCode

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/

