public class traversal {
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data)
        {
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

    static class BinaryTree{
        public static int idx=-1;
        public static Node buildTree(int[] nodes)
        {

         idx++;
         if (nodes[idx]==-1)
         {
             return null;
         }
         Node root=new Node(nodes[idx]);
         root.left=buildTree(nodes);
         root.right=buildTree(nodes);
         return root;
        }

        public static void inorder(Node root)
        {
            inorder(root.left);
            System.out.println(root.data);
            inorder(root.right);

        }

    }

    public static void main(String[] args) {
        int[] nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

        Node root= BinaryTree.buildTree(nodes);
        assert root != null;
        System.out.println(root.data+"");
        inorder(root);
    }
}
