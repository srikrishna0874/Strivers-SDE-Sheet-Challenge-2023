// https://www.codingninjas.com/codestudio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node *findIntersection(Node *headA, Node *headB)
{
    // Write your code here
    int c1 = 0, c2 = 0;
    Node *tmp = headA;
    while (tmp != NULL)
    {
        c1++;
        tmp = tmp->next;
    }
    tmp = headB;
    while (tmp != NULL)
    {
        c2++;
        tmp = tmp->next;
    }
    if (c1 > c2)
    {
        int dif = c1 - c2;
        while (dif--)
            headA = headA->next;
    }
    else
    {
        int dif = c2 - c1;
        while (dif--)
            headB = headB->next;
    }
    while (headA != NULL)
    {
        if (headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}