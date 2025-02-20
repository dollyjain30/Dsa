#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // using constructors
};
int main()
{
    Node a;
    a.val = 10;
    Node b;
    b.val = 20;
    Node c;
    c.val = 30;
    Node d;
    d.val = 40;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
}