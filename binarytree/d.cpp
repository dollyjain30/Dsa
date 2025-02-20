#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<int> helper(Node *root, int level, vector<int> &ans)
{
    if (root == NULL)
        return ans;

    // If ans doesn't have a value at the current level, add the leftmost node
    if (ans.size() == level)
    {
        ans.push_back(root->data);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    // Recursively call for left and right subtrees, updating ans at each step
    ans = helper(root->left, level + 1, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    ans = helper(root->right, level + 1, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return ans;
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    ans = helper(root, 0, ans);
    return ans;
}

int main()
{
    // Constructing the binary tree
    //        1
    //       / \
    //      2   3
    //     / \ / \
    //    4  5 6  7
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = leftView(root);

    cout << "Left View: ";
    for (int val : result)
    {
        cout << val << " ";
    }

    // Remember to free the allocated memory for the tree nodes.
    return 0;
}
