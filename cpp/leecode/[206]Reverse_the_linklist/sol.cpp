#include<iostream>
#include<vector>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void print(ListNode *);

ListNode* reverseList(ListNode* head) {

    ListNode * cur   = head;
    ListNode * dummy = new ListNode(0);
    ListNode * tmp   = NULL;

    while (cur) {

        tmp = dummy->next;
        dummy->next = new ListNode(cur->val);
        dummy->next->next = tmp;

        cur = cur->next;
    }
    return dummy->next;
}
ListNode * append(ListNode * head, int val)
{

    if (head == NULL) {
        head = new ListNode(val);
        return head;
    }

    else {
        ListNode * cur = head;

        while(cur->next != NULL) 
            cur= cur->next;
        cur->next = new ListNode(val);
        return head;
    }
}
void print(ListNode * head)
{
    while(head != NULL) {
        cout<< head->val<< "->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(void)
{
    ListNode * head = NULL;

    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);

    head = reverseList(head);
    print(head);

    return 0;
}

