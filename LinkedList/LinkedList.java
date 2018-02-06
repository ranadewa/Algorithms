package LinkedList;

public class LinkedList {

    protected GenericNode head = null;

    public <T extends Comparable<T>> void insertAtHead(T data) {

        GenericNode<T> newNode = new GenericNode<T>(data);

        newNode.setNextNode(this.head);
        this.head = newNode;
    }

    public void printList() {

        if (head == null) {
            return;
        }


        GenericNode tmp = head;

        do {

            System.out.print(tmp.getData()+ " ");

        } while ((tmp = tmp.getNextNode()) != null);


    }

    public <T extends Comparable> GenericNode find(T data) {

        GenericNode current = head;

        while (current != null) {

            if (current.compareTo(data) == 0) {

                return current;
            }

            current = current.getNextNode();
        }

        return null;
    }

    @Override
    public String toString() {

        String s = "{ ";

        GenericNode cur = head;

        while (cur != null) {
            s += cur.toString() + ", ";
            cur = cur.getNextNode();
        }

        s += "}";

        return s;
    }

    public int getSize() {

        int size = 0;

        GenericNode current = head;

        while (current != null) {
            size++;
            current = current.getNextNode();
        }

        return size;
    }

    public void deleteHead() {

        if (this.head == null) {
            return;
        }

        this.head = this.head.getNextNode();

    }
}
