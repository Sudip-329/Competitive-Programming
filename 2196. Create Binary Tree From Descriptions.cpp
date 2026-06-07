class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;
        for (auto& d : descriptions) {
            int val = d[0];
            int child = d[1];
            int is_left = d[2];
            if (!nodes.count(val))
                nodes[val] = new TreeNode(val);
            if (!nodes.count(child))
                nodes[child] = new TreeNode(child);
            children.insert(child);
            if (is_left == 1)
                nodes[val]->left = nodes[child];
            else
                nodes[val]->right = nodes[child];
        }
        for (auto& [val, node] : nodes) {
            if (!children.count(val))
                return node;
        }
        return nullptr;
    }
};
