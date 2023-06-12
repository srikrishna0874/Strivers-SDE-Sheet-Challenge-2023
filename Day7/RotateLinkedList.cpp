// https://www.codingninjas.com/codestudio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k)
{
    // Write your code here.
    int le = 1;
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        le++;
    }
    k = k % le;
    k = le - k;
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    for (int i = 0; i < k; i++)
        temp = temp->next;
    head = temp->next;
    temp->next = NULL;
    return head;
}