import java.util.*;
class TreeNode{
    int data;
    TreeNode left;
    TreeNode right;
    TreeNode(int data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
    String to_String(){
        return "Value: "+this.data;
    }
};
public class Main{
    public static void main(String[] args){
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(3);
        root.right = new TreeNode(7);
        root.left.left = new TreeNode(2);
        root.left.right = new TreeNode(4);
        root.right.left = new TreeNode(6);
        root.right.right = new TreeNode(8);
        System.out.println(root.to_String());
        System.out.println(root.left.to_String());
        System.out.println(root.right.to_String());
        System.out.println(root.left.left.to_String());
        System.out.println(root.left.right.to_String());
        System.out.println(root.right.left.to_String());
        System.out.println(root.right.right.to_String());
    }
}