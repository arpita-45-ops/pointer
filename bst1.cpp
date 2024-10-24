
class searchbst{
public:
    TreeNode* bst(TreeNode* root, int data) {
        if (root == NULL || root->key == value) {
            return root;
        }

        if (root->key> data) {
            return bst(root->left, data); 
        } else {
            return bst(root->right, data); 
        }
    }
};
void display(TreeNode* root) {
    if (!root) return;
    cout << root->data << " "<<endl;
    display(root->left);
    display(root->right);
}

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    searchbst obj;
    int data = 2;

    TreeNode* result = obj.bst(root, data);
    if (!result) {
        printTree(result);
    } else {
        cout << "data" << data << " not present in bst.";
    }

    return 0;
}
