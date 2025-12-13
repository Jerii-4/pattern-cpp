#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == nullptr)
        {
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                TreeNode *root = q.front();
                q.pop();
                if (root->left != nullptr)
                    q.push(root->left);
                if (root->right != nullptr)
                    q.push(root->right);
                level.push_back(root->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
void printVector(const vector<int> &vec)
{

    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;

    vector<vector<int>> result = solution.levelOrder(root);

    cout << "Level Order Traversal of Tree: " << endl;

    for (const vector<int> &level : result)
    {
        printVector(level);
    }

    return 0;
}