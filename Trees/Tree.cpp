#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode();

    TreeNode(int data){
        this->data = data;
    }

};

void Insert(TreeNode* &root, int data){
    if(root == NULL){
        root = new TreeNode(data);
        return;
    }
    if(root->data > data){
        Insert(root->left, data);
        return;
    }
    Insert(root->right, data);
    return;
}


void InOrderTraversal(TreeNode* root){
    if(root == NULL) return;
    InOrderTraversal(root->left);
    cout<<root->data<<", ";
    InOrderTraversal(root->right);
}

void PreOrderTraversal(TreeNode* root){
    if(root == NULL) return;
    cout<<root->data<<", ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void PostOrderTraversal(TreeNode* root){
    if(root == NULL) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<", ";
}

void LevelOrderTraversal(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        cout<<"[";
        for(int i = 0; i<size; i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            cout<<temp->data<<", ";
        }
        cout<<"], ";

    }
    cout<<endl;
}
void zigzagTraversal(TreeNode* root){
    if (root == NULL) return;
    queue<TreeNode*> q;
    bool LtoR = true;
    q.push(root);
    cout<<"[";
    while (!q.empty()) {
        int n = q.size();
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();
            int idx = LtoR ? i : (n - i - 1);
            temp[idx] = node->data;
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        cout<<"[";
        for(int ele : temp){
            cout<<ele<<", ";
        }
        cout<<"], ";
        LtoR = !LtoR;
    }
    return;
}

void levelOrderBottom(TreeNode* root) {
    if(root == NULL) return;
    vector<vector<int>> res;
    stack<vector<int>> st;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> temp;
        for(int i = 0; i< n; i++){
            TreeNode* node = q.front();
            q.pop();
            temp.push_back(node->data);
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }
        st.push(temp);
    }
    while(!st.empty()){
        vector<int> temp = st.top();
        st.pop();
        cout<<"[";
        for(int ele : temp){
            cout<<ele<<", ";
        }
        cout<<"], ";
    }
    return;
}

int maxDepth(TreeNode* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    return 1 + max(maxDepth(root->left) , maxDepth(root->right));
}

int main(){
    TreeNode* root = new TreeNode(5);
    Insert(root,3);
    Insert(root,7);
    Insert(root,1);
    Insert(root,9);
    InOrderTraversal(root);
    cout<<endl;
    PostOrderTraversal(root);
    cout<<endl;
    PreOrderTraversal(root);
    cout<<endl;
    LevelOrderTraversal(root);
    cout<<endl;
    zigzagTraversal(root);
    cout<<endl;
    levelOrderBottom(root);
    cout<<endl;

}