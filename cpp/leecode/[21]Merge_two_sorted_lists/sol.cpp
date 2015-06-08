#include<iostream>
#include<vector>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

    ListNode dummy(0);

    dummy.next = l1;
    ListNode * cur = &dummy;

    while(l2) 
    {

        while(cur->next && cur->next->val <= l2->val) cur = cur->next;

        l1 = cur->next;
        cur->next = l2;
        l2 = l1;
    }
    return dummy.next;
}
int main(void)
{
    return 0;
}

