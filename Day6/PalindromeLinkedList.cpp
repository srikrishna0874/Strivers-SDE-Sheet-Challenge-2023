// https://www.codingninjas.com/codestudio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    vector<int> v;
    while (head != NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    for (int i = 0; i < v.size() / 2; i++)
        if (v[i] != v[v.size() - i - 1])
            return false;
    return true;
}