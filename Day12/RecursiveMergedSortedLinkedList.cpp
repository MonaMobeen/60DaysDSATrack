#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

ListNode *mergeTwoListsRecursive(ListNode *l1, ListNode *l2)
{

    if (l1 == NULL)
        return l2;

    if (l2 == NULL)
        return l1;

    if (l1->val <= l2->val)
    {
        l1->next = mergeTwoListsRecursive(l1->next, l2);
        return l1;
    }

    else
    {
        l2->next = mergeTwoListsRecursive(l1, l2->next);
        return l2;
    }
};

int main(void)
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode *merged = mergeTwoListsRecursive(l1, l2);

    while (merged != NULL)
    {
        cout << merged->val << " ";
        merged = merged->next;
    }

    return 0;
}