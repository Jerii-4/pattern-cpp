

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;                                                       // Value of the node
    TreeNode *left;                                                 // Pointer to the left child
    TreeNode *right;                                                // Pointer to the right child
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {} // Constructor to initialize a node
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        if (root == nullptr)
            return result;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *root = st.top();
            st.pop();
            result.push_back(root->data);
            if (root->right != nullptr)
            {
                st.push(root->right);
            }
            if (root->left != nullptr)
            {
                st.push(root->left);
            }
        }
        return result;
    }
};
int main()
{

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;

    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
}