#include<iostream>
#include<vector>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};
ListNode * removeElements(ListNode * head, int val)
{
    ListNode * dummy = new ListNode(-1);
    dummy->next = head;

    ListNode * pre = dummy, * cur = head;
    while(cur) {

        if (cur->val == val) {
            ListNode * tmp = cur;
            pre->next = cur->next;
            cur = cur->next;
            delete tmp;
        }
        else {
            cur = cur->next;
            pre = pre->next;
        }
    }
    return dummy->next;

}

int main(void)
{
    return 0;
}

