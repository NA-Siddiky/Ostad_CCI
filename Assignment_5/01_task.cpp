#include <iostream>
using namespace std;

// Structure for a node in the linked list
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse the linked list iteratively
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *current = head;
    ListNode *next = nullptr;

    while (current != nullptr)
    {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the link
        prev = current;       // Update the previous pointer
        current = next;       // Move to the next node
    }

    return prev; // The new head is the former tail
}

// Function to create a linked list with given values
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = createList(arr, n);
    head = reverseList(head);
    printList(head);

    return 0;
}
