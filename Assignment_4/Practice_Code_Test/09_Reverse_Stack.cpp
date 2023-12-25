#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &stk)
{
    // Base case: stack is empty
    if (stk.empty())
    {
        return;
    }

    // Recursive case: reverse the remaining stack
    int topElement = stk.top();
    stk.pop();
    reverseStack(stk);

    // Insert the top element at the bottom of the reversed stack
    stk.push(topElement);
}

void printStack(stack<int> &stk)
{
    // Base case: stack is empty
    if (stk.empty())
    {
        return;
    }

    // Print the top element and pop it from the stack
    int topElement = stk.top();
    stk.pop();
    cout << topElement << " ";

    // Recursive call to print the remaining stack
    printStack(stk);

    // Push the top element back to the stack after printing
    stk.push(topElement);
}

int main()
{
    int N;
    cin >> N;

    stack<int> stk;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        stk.push(num);
    }

    reverseStack(stk);
    printStack(stk);

    return 0;
}