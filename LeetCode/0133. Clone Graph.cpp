class Solution {
public:
    unordered_map<Node*, Node*> res;

    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;

        if(res.find(node) == res.end()) {
            res[node] = new Node(node->val, {});
            for(Node* neighbor: node->neighbors) 
                res[node]->neighbors.push_back(cloneGraph(neighbor));
        }
        return res[node];
    }
};
