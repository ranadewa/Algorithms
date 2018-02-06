package BinarySearchTree;

public class BinaryTree<T> {

    public static void main(String[] args) {

        BinaryTree<Integer> bt = new BinaryTree();

        bt.insertNode(5);
        bt.insertNode(19);
        bt.insertNode(12);
        bt.insertNode(15);
        bt.insertNode(6);
        bt.insertNode(8);
        bt.insertNode(13);

        bt.traveseTreeInOrder();

        System.out.println(bt.search(6));

       // bt.delete(8);
//        System.out.println(bt);
//        System.out.println(bt.search(6));
//        System.out.println(bt.search(5));
//        System.out.println(bt.search(60));

        bt.delete(6);
       // System.out.println(bt.search(8));

        System.out.println(" Max " + bt.getMax() + " Min " + bt.getMin());

        bt.traveseTreeInOrder();
//
//        BinaryTree<String> sbt = new BinaryTree<>();
//
//        sbt.insertNode("ABC");
//        sbt.insertNode("BCD");
//        sbt.insertNode("CDE");
//
//
//        System.out.println(sbt);
    }

    public void traveseTreeInOrder() {

        System.out.println("BinaryTree.traveseTreeInOrder");

        if (root != null) {
            root.traveseTreeInOrder();
        }

        System.out.println();
    }

    public TreeNode getMax() {

        if (root != null) {

            return root.getMax();

        }

        return  null;
    }

    public TreeNode getMin() {

        if (root != null) {

            return root.getMin();

        }

        return  null;
    }

    public <T extends Comparable<T>> void delete(T data) {

        TreeNode<T> current = root, parent = root;

        Boolean isLeftChild = false;

        while (current != null) {

            if (current.getData().compareTo(data) > 0) {
                parent = current;
                current = current.getLeftChild();
                isLeftChild = true;
            } else if (current.getData().compareTo(data) == 0) {

                break;
            } else {
                parent = current;
                current = current.getRightChild();
                isLeftChild = false;
            }
        }

        if (hasNochildren(current) == true) {

            if (isLeftChild == true) {
                parent.setLeftChild(null);
            } else {
                parent.setRightChild(null);
            }
        } else if (hasOnlyOneChild(current) == true) {

            TreeNode temp = (current.getLeftChild() != null) ? current.getLeftChild() : current.getRightChild();

            if (current == root) {
                root = temp;
            } else if (isLeftChild) {
                parent.setLeftChild(temp);
            } else {
                parent.setRightChild(temp);
            }
        } else {

        }


    }

    private <T extends Comparable<T>> boolean hasOnlyOneChild(TreeNode<T> node) {

        if (node.getRightChild() == null ^ node.getLeftChild() == null) {
            return true;
        }
        return false;
    }

    private boolean hasNochildren(TreeNode node) {

        if (node.getRightChild() == null && node.getLeftChild() == null) {
            return true;
        }

        return false;
    }

    private <T extends Comparable> TreeNode search(T i) {

        System.out.println("Searchng node with data " + i);
        if (root != null) {
            return root.search(i);

        }
        return null;
    }

    private TreeNode root;

    public <T extends Comparable<T>> void insertNode(T data) {

        TreeNode<T> newNode = new TreeNode<>(data);

        if (root == null) {
            root = newNode;
        } else {
            root.insertChild(newNode);
        }
    }

    @Override
    public String toString() {

        if (root != null) {
            return root.toString();
        }

        return null;
    }
}
