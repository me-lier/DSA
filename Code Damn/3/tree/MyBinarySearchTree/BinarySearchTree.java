// package tree.MyBinarySearchTree;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

// import apple.laf.JRSUIUtils.Tree;

class TreeNode {
    int data;
    TreeNode left;
    TreeNode right;

    public TreeNode(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }

    public TreeNode(int data, TreeNode left, TreeNode right) {
        this.data = data;
        this.left = left;
        this.right = right;
    }

    @Override
    public String toString() {
        return "Value = " + this.data;
    }
}

class BinarySearchTree1 {
    public TreeNode root;

    BinarySearchTree1() {
        root = null;
    }

    // Insert method to add nodes to the tree
    public void insert(int data) {
        TreeNode newNode = new TreeNode(data);
        if (root == null) {
            root = newNode;
            return;
        }
        TreeNode temp = root;
        while (true) {
            if (data < temp.data) {
                if (temp.left == null) {
                    temp.left = newNode;
                    return;
                } else {
                    temp = temp.left;
                }
            } else {
                if (temp.right == null) {
                    temp.right = newNode;
                    return;
                } else {
                    temp = temp.right;
                }
            }
        }
    }

    public TreeNode insertRecursive(TreeNode root, int data) {
        if (root == null) {
            return new TreeNode(data);
        }
        if (data < root.data) {
            root.left = insertRecursive(root.left, data);
        } else {
            root.right = insertRecursive(root.right, data);
        }
        return root;
    }

    public void insert_recursive(int data) {
        root = insertRecursive(root, data);
    }

    // In-order traversal to display the tree
    public void inorderTraversal(TreeNode node) {
        if (node != null) {
            inorderTraversal(node.left);
            System.out.print(node.data + " ");
            inorderTraversal(node.right);
        }
    }

    // Public method to trigger traversal
    public void displayTree() {
        inorderTraversal(root);
    }

    public TreeNode search_rec(TreeNode root, int key){
        if(root == null || root.data == key){
            return root;
        }
        if(root.data < key){
            return search(root.right, key);
        }
        return search(root.left, key);
    }
    public TreeNode search(TreeNode root, int key){
        if(root == null) return root;
        TreeNode temp = root;
        while(temp != null){
            if(temp.data == key){
                return temp;
            }
            if(root.data < key){
                temp = temp.right;
            }else{
                temp = temp.left;
            }
        }
        return null;
    }

    public int depth(TreeNode root, int key, int dept){
        if(root == null) return -1;
        if(root.data == key) return dept;
        if(root.data < key){
            return depth(root.right, key, ++dept);
        }else{
            return depth(root.left, key, ++dept);
        }
    }

    public int height(TreeNode root){
        if(root == null) return -1;
        if(root.left == null && root.right ==null) return 0;
        return 1 + Math.max(height(root.left), height(root.right));
    }

    public int height_val(TreeNode root, int value){
        if(root == null) return -1;
        if(root.data == value) return height(root);
        if(root.data <value){
            return height_val(root.right, value);
        }else{
            return height_val(root.left, value);
        }
    }

    public TreeNode getMin(TreeNode root){
        if(root == null) return null;
        if(root.left == null) return root;
        return getMin(root.left);
    }

    public boolean isEqual(TreeNode root1, TreeNode root2){
        if(root1 == null && root2 == null) return true;
        return root1.data == root2.data && isEqual(root1.left, root2.left) && isEqual(root1.right, root2.right);
    }

    public boolean isValidateBST(TreeNode root, int min, int max){
        if(root == null) return true;
        if(root.data <=min || root.data >= max) return false;
        return isValidateBST(root.left, min, root.data) && isValidateBST(root.right, root.data, max);
    }

    public void NodeAtK(TreeNode root, int k){
        if(root == null) return;
        if(k == 0){
            System.out.println(root.data);
            return;
        }
        NodeAtK(root.left, --k);
        NodeAtK(root.right, k);
    }

    public void LevelOrderD(TreeNode root){
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            TreeNode temp = q.poll();
            System.out.println(temp.data);
            if(temp.left != null){
                q.offer(root.left);
            }
            if(temp.right != null){
                q.offer(root.right);
            }
            
        }
    }

    public List<List<Integer>> LevelOrder(TreeNode root){
        List<List<Integer>> ans = new LinkedList<>();
        if(root == null) return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            int size = q.size();
            List<Integer> temp = new LinkedList<>();
            
            for(int i = 0; i<size; i++){
                TreeNode node = q.poll();
                temp.add(node.data);

                if(node.left != null){
                    q.offer(node.left);
                }
                if(node.right != null){
                    q.offer(node.right);
                }
            }

            ans.add(temp);

        }
        return ans;
    }

}



public class BinarySearchTree {
    public boolean isEqual(TreeNode root1, TreeNode root2){
        if(root1 == null && root2 == null) return true;
        return root1.data == root2.data && isEqual(root1.left, root2.left) && isEqual(root1.right, root2.right);
    }
    public static void main(String[] args) {
        BinarySearchTree1 tree1 = new BinarySearchTree1();
        tree1.insert(7);
        tree1.insert(3);
        tree1.insert(8);
        tree1.insert(4);
        tree1.insert(2);
        tree1.insert(10);
        BinarySearchTree1 tree2 = new BinarySearchTree1();
        tree2.insert(5);
        tree2.insert(3);
        tree2.insert(5);
        tree2.insert(1);
        tree2.insert(4);

        System.out.println("In-order Traversal of the Tree:");
        tree1.displayTree();
        // System.out.println("\n" + tree1.isEqual(tree1.root, tree2.root));
        System.out.println("Level Order Traversal");
        tree1.LevelOrder(tree1.root);
        // tree1.NodeAtK(tree1.root, 1);
        System.out.println(tree1.LevelOrder(tree1.root));
    }
}