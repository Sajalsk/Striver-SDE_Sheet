#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{

public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    int main(){

        bool check(TreeNode * p, TreeNode *q){

            if (p == NULL && q == NULL) return true;

            if (p == NULL || q == NULL) return false;
            if (p->val != q->val) return false;

    return (check(p->left,q->left)&&check(p->right,q->right)); //boolena True && True=true  || false

    
} bool isSameTree(TreeNode *p, TreeNode *q) {

    return check(p, q);

} // end of problem function
}
; // End of main fn
}
; // End of Class TreeNode;