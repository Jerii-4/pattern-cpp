#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void deleteDeepest(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        delete root;
        return;
    }

    TreeNode *DeepestNode = nullptr;
    TreeNode *Parent = nullptr;
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();

        DeepestNode = current;
        if (current->left)
        {
            Parent = current;
            q.push(current->left);
        }
        if (current->right)
        {
            Parent = current;
            q.push(current->right);
        }
    }
    if (Parent)
    {
        if (Parent->right == DeepestNode)
        {
            Parent->right = nullptr;
        }
        else
        {
            Parent->left = nullptr;
        }
        delete DeepestNode;
    }
}

void printTree(TreeNode *root)
{
    if (!root)
        return;
    std::queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();
        std::cout << current->val << " ";
        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
    std::cout << std::endl;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    std::cout << "Original tree: ";
    printTree(root);

    deleteDeepest(root);

    std::cout << "Tree after deleting deepest node: ";
    printTree(root); // Note: If root itself was the deepest and only node, this might print nothing or cause issues if not handled carefully in main.
                     // For this example, root is not the deepest.

    // Clean up remaining nodes (not shown for brevity, but important in real applications)
    return 0;
}