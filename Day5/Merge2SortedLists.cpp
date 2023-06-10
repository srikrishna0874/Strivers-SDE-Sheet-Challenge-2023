// https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *sortTwoLists(Node<int> *list1, Node<int> *list2)
{
    // Write your code here.
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    Node<int> *ptr = list1;
    if (list2->data < list1->data)
    {
        ptr = list2;
        list2 = list2->next;
    }
    else
        list1 = list1->next;
    Node<int> *cur = ptr;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            cur->next = list1;
            list1 = list1->next;
        }
        else
        {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    if (list1 != NULL)
        cur->next = list1;
    else
        cur->next = list2;
    return ptr;
}
