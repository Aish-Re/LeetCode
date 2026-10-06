class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;

        unordered_map<Node*, Node*> mp;
        return dfs(node, mp);
    }

    Node* dfs(Node* node, unordered_map<Node*, Node*>& mp) {
        if (mp.find(node) != mp.end())
            return mp[node];

        Node* clone = new Node(node->val);

        mp[node] = clone;

        for (Node* neighbor : node->neighbors) {
            clone->neighbors.push_back(dfs(neighbor, mp));
        }

        return clone;
    }
};