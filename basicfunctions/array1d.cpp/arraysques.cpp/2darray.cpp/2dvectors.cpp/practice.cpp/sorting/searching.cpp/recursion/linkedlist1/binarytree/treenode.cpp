#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displaytree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displaytree(root->left);
    displaytree(root->right);
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;
    int ans = root->val + sum(root->left) + sum(root->right);
    return ans;
}
int product(Node *root)
{
    if (root == NULL)
        return 1;
    int ans = root->val * product(root->left) * product(root->right);
    return ans;
}
int size(Node *root)
{
    if (root == NULL)
        return 0;
    int an = 1 + size(root->left) + size(root->right);
    return an;
}
int maxin(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    int a = max(root->val, max(maxin(root->left), maxin(root->right)));
    return a;
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displaytree(a);
    cout << endl;
    cout << sum(a);
    cout << endl;
    cout << product(a);
    cout << endl;
    cout << size(a);
    cout << endl;
    cout << maxin(a);
}