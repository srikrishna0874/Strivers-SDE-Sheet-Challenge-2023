// https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    Node *res = new Node();
    Node *tmp = res;
    int ca = 0;
    while (l1 != NULL || l2 != NULL || ca == 1)
    {
        int s = (l1 ? l1->data : 0) + (l2 ? l2->data : 0) + ca;
        ca = s / 10;
        res->next = new Node(s % 10);
        // res=res->next;
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
        res = res->next;
    }
    return tmp->next;
}
