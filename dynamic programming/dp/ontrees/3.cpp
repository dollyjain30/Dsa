#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int solve(Node *root, int &res) {
    if(root == nullptr) return 0;
    int l = solve(root->left, res);
    int r = solve(root->right, res);
    int temp=max(l, r) + root->data;
    if(root->left==NULL && root->right==NULL)
     temp = max(temp,  root->data);
    int ans = max(temp, root->data + l + r);
    res = max(ans, res);
    return temp;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int res = INT_MIN;
    solve(root, res);
    cout<< res << endl;


    return 0;
}
