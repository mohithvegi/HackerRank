// https://www.hackerrank.com/challenges/ctci-is-binary-search-tree/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=trees


/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

    bool isSmaller(Node* root, int value){
    if(root==NULL){
        return true;
    }
    if(root->data < value && isSmaller(root->left, value) && isSmaller(root->right, value)){
        return true;
    }
    else{
        return false;
    }
}

    bool isGreater(Node* root, int value){
        if(root==NULL){
            return true;
        }
        if(root->data > value && isGreater(root->left, value) && isGreater(root->right, value
        )){
            return true;
        }
        else{
            return false;
        }
}
	bool checkBST(Node* root) {
		if(root == NULL){
            return true;
        }
        if(isSmaller(root->left, root->data) && isGreater(root->right, root->data) && checkBST(root->left) && checkBST(root->right)){
            return true;
        }
        else{
            return false;
        }
	}
