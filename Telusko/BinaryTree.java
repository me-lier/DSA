class Node{
    int data;
    Node left;
    Node right;

    public Node(){}

    public Node(int data){
        this.data = data;
    }
}
public class BinaryTree{
    Node root;

    public void add(int data){
        root = add_rec(root, data);
    }

    public Node add_rec(Node root, int data){
        if(root == null){
            root = new Node(data);
        }else if(root.data > data){
            root.left = add_rec(root.left, data);
        }else if(root.data < data){
            root.right = add_rec(root.right, data);
        }
        return root;
    }

    //Inorder Traversal

    public void InOrderTraversal(){
        InOrderTraversal_rec(root);
    }

    public void InOrderTraversal_rec(Node root){
        if(root != null){
            InOrderTraversal_rec(root.left);
            System.out.print(root.data + ", ");
            InOrderTraversal_rec(root.right);
        }
    }

    public void PreOrderTraversal(){
        PreOrderTraversal_rec(root);
    }

    public void PreOrderTraversal_rec(Node root){
        if(root != null){
            System.out.print(root.data + ", ");
            PreOrderTraversal_rec(root.left);
            PreOrderTraversal_rec(root.right);
        }
    }

    public void PostOrderTraversal(){
        PostOrderTraversal_rec(root);
    }

    public void PostOrderTraversal_rec(Node root){
        if(root != null){
            PostOrderTraversal_rec(root.left);
            PostOrderTraversal_rec(root.right);
            System.out.print(root.data + ", ");
        }
    }

    public static void main(String[] args) {
        BinaryTree root = new BinaryTree();
        root.add(5);
        root.add(4);
        root.add(6);
        root.add(3);
        root.add(7);
        root.add(2);
        root.add(8);
        root.InOrderTraversal();
        System.out.println();
        root.PreOrderTraversal();
        System.out.println();
        root.PostOrderTraversal();

    }

}