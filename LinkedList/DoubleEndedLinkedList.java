package LinkedList;

public class DoubleEndedLinkedList extends LinkedList {
    protected GenericNode tail = null;


    @Override
    public <T extends Comparable<T>> void insertAtHead(T data) {

        GenericNode<T> newNode = new GenericNode<T>(data);

         if (tail == null) {
            tail = newNode;
        }

        newNode.setNextNode(this.head);
        this.head = newNode;
    }

    public <T extends Comparable<T>> void insertAtTail(T data) {

        GenericNode<T> newNode = new GenericNode<T>(data);

        if (head == null) {
            head = newNode;
        }

        if (tail != null) {
            tail.setNextNode(newNode);
        }

        tail = newNode;
    }
}
