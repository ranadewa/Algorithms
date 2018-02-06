package BinarySearchTree;

public class TreeNode <T extends Comparable<T>> implements Comparable<T> {

    private T data;

    private  TreeNode leftChild;
    private  TreeNode rightChild;

    public  TreeNode(T data) {
        this.data = (T) data;
    }

    public void insertChild(TreeNode<T> childNode) {

        if (getData().compareTo(childNode.getData()) > 0) {

            if (leftChild != null) {
                leftChild.insertChild(childNode);
            } else {
                setLeftChild(childNode);
                return;

            }
        } else {
            if (rightChild != null) {
                rightChild.insertChild(childNode);
            } else {
                setRightChild(childNode);
                return;
            }
        }
    }

    public TreeNode search(T  data) {

        if (this.data.compareTo(data) == 0) {
            return this;
        }

        if (this.data.compareTo(data) > 0) {

            if (leftChild != null) {
                 return leftChild.search(data);
            }
        } else
            {
            if (rightChild != null) {
                return rightChild.search(data);
            }
        }

        return  null;
    }

    @Override
    public String toString() {

        String s = "" + data;

        if (leftChild != null) {
            s = s+ " lc "+ leftChild.toString();
        }

        if (rightChild != null) {
            s =  s+ " rc " + rightChild.toString();
        }

        return s;
    }
    public TreeNode getRightChild() {
        return rightChild;
    }

    public void setRightChild(TreeNode rightChild) {
        this.rightChild = rightChild;
    }

    public TreeNode getLeftChild() {
        return leftChild;
    }

    public void setLeftChild(TreeNode leftChild) {
        this.leftChild = leftChild;
    }

    public T getData() {
        return data;
    }

    @Override
    public int compareTo(T o) {
        return this.getData().compareTo(o);
    }

    public TreeNode getMax() {

        TreeNode next = this.getRightChild();

        if (next != null) {
            return next.getMax();
        }

        return this;
    }

    public TreeNode getMin() {

        TreeNode next = this.getLeftChild();

        if (next != null) {
            return next.getMin();
        }
        return this;
    }

    public void traveseTreeInOrder() {

        if (getLeftChild() != null) {
            getLeftChild().traveseTreeInOrder();
        }

        System.out.print(data + " ");

        if (getRightChild() != null) {
            getRightChild().traveseTreeInOrder();
        }
    }
}
