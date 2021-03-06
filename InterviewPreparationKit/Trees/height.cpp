// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=trees



/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root==NULL){
            return -1;
        }
        int l = height(root->left);
        int r = height(root->right);
        if(l<r){
            return 1 + height(root->right);
        }
        return 1 + height(root->left);
    }
