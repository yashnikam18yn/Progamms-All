
class Node
{
 int data;
 Node left;
 Node right;

   Node(int data)
   {
       this.data=data;
   }

   public static Node insert(Node root,int val)
   {
       if (root.data<val)
       {
           root.right=insert(root.right,val);
       }
       if (root.data>val)
       {
           root.left=insert(root.left,val);
       }else
       {
           root=new Node(val);

       }
       return root;
   }
}
public class BST {
    public static void main(String[] args) {
        int[] values={5,1,3,4,2,7};
        Node root=null;

        for (int value : values) {
            assert root != null;
            root = Node.insert(root, value);
        }
    }
}