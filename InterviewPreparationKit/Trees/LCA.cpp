// https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=trees




/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    Node *lca(Node *root, int v1,int v2) {
		if(root==NULL){
            return root;
        }
        if(root->data==v1 || root->data==v2){
            return root;
        }
        if(root->data > v1 && root->data > v2){
            return lca(root->left, v1, v2);
        }
        else if(root->data < v1 && root->data < v2){
            return lca(root->right, v1, v2);
        }
        return root;
    }
