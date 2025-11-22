class Solution {
public:

    bool isLeaf(Node* node) {
        return node && !node->left && !node->right;
    }

    void addLeft(Node* root, vector<int>& ans) {
        Node* curr = root->left;
        while (curr) {
            if (!isLeaf(curr)) ans.push_back(curr->data);
            if (curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }

    void addLeaves(Node* root, vector<int>& ans) {
        if (!root) return;
        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }
        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }

    void addRight(Node* root, vector<int>& ans) {
        vector<int> temp;
        Node* curr = root->right;
        while (curr) {
            if (!isLeaf(curr)) temp.push_back(curr->data);
            if (curr->right) curr = curr->right;
            else curr = curr->left;
        }
        reverse(temp.begin(), temp.end());
        ans.insert(ans.end(), temp.begin(), temp.end());
    }

    vector<int> boundaryTraversal(Node* root) {
        vector<int> ans;
        if (!root) return ans;

        if (!isLeaf(root))
            ans.push_back(root->data);

        addLeft(root, ans);
        addLeaves(root, ans);
        addRight(root, ans);

        return ans;
    }
};
