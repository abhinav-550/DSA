#include "C:\Users\Abhinav\Desktop\VS Code Projects\C C++ DSA\3.DSA in C++ Advanced\1-ds\6binarySearchTree\1theory\0import.cpp"

pair<Node* , Node*> findNode(Node* root,int nodeToDelete){
    if(root == NULL) return make_pair(NULL,NULL);

    pair<Node* , Node*> ans;
    if(root -> right && root -> right -> data == nodeToDelete){
        ans.first = root;
        ans.second = root -> right;
    }else if(root -> left && root -> left -> data == nodeToDelete){
        ans.first = root;
        ans.second = root -> left;
    }

    pair<Node* , Node*> leftAns = findNode(Node* root->left, int nodeToDelete);
    pair<Node* , Node*> rightAns = findNode(Node* root->right, int nodeToDelete);

}

void deleteNode(Node* &root, int nodeToDelete){
    if(root == NULL) return ;
    // find 
    pair<Node* , Node*> curr = findNode(root,nodeToDelete);
    if(curr.second == NULL) return ;

    //add the nodes to a queue
    queue<Node*> q;
    addBarrenElements(curr.second, q);

    //insert barren nodes
    while(!q.empty()){

    }
}

int main(){
    Node* root = NULL;
    buildBST(root);
    levelOrderTraversal(root);
    deleteNode(root,12);
    levelOrderTraversal(root);
  return 0;
}