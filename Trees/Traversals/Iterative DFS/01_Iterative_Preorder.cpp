#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> itr_preorder(TreeNode *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        TreeNode *temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if (temp->right != nullptr)
        {
            st.push(temp->right);
        }
        if (temp->left != nullptr)
        {
            st.push(temp->left);
        }
    }
    return ans;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(6);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);

    vector<int> result = itr_preorder(root);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}