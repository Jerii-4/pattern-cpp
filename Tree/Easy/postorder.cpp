#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
class Solution
{
public:
    void postorder(vector<int> &arr, Node *root)
    {
        if (root == nullptr)
        {
            return;
            postorder(arr, root->left);
            postorder(arr, root->right);
            arr.push_back(root->data);
        }
    }
    vector<int> postOrder(Node *root)
    {
        vector<int> arr;
        postorder(arr, root);
        return arr;
    }
};

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;

    vector<int> result = sol.postOrder(root);

    cout << "PostOrder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}