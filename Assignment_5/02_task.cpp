#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *dummyHead = new ListNode(0);
    ListNode *current = dummyHead;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val <= list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    current->next = list1 != nullptr ? list1 : list2;

    return dummyHead->next;
}

ListNode *createList(int arr[], int n)
{
    if (n == 0)
    {
        return nullptr;
    }

    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;

    for (int i = 1; i < n; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to print the linked list
void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    ListNode *list1 = createList(arr1, n1);

    int arr2[] = {1, 3, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    ListNode *list2 = createList(arr2, n2);

    ListNode *mergedList = mergeTwoLists(list1, list2);

    printList(mergedList);

    return 0;
}
