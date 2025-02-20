#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        (*this).val = val;
        this->next = NULL;
    }
};
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {

        n++;
        temp = temp->next;
    }
    return n;
}
void displayrecursion(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrecursion(head->next);
}
int main()
{

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Node *temp = a;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    // creating
    cout << endl;
    cout << size(a);
    cout << endl;
    displayrecursion(a);

    return 0;
}