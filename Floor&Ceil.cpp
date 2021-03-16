#include<iostream>
using namespace std;

void BSThelper(TreeNode* root, int key, int& floor, int& ceil)
{
    while(root)
    {
        if(key == root->val)
        {
            floor = root->val;
            ceil = root->val;
            return;
        }
        if(key > root->val)
        {
            floor = root->val;
            root = root->right;
        }
        else{
            ceil = root->val;
            root = root->left;
        }
    }
    return;
}

int main()
{

void floorCeilBST(TreeNode* root, int key)
{
    int floor = -1, ceil = -1;
    BSThelper(root, key, floor, ceil);
    cout << key <<" " << floor <<" " << ceil;
}


    return 0;
}