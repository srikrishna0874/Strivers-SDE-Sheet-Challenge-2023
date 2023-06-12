// https://www.codingninjas.com/codestudio/problems/copy-list-with-random-pointer_8230734?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int> *, LinkedListNode<int> *> um;
    LinkedListNode<int> *temp = head;
    while (temp != NULL)
    {
        um[temp] = new LinkedListNode<int>(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        um[temp]->next = um[temp->next];
        um[temp]->random = um[temp->random];
        temp = temp->next;
    }
    return um[head];
}
