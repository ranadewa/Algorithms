package LinkedList;

public class SortedLinkList extends LinkedList {

    @Override
    public <T extends Comparable<T>> void insertAtHead(T data) {

        GenericNode<T> newNode = new GenericNode<T>(data);

        if (this.head == null) {         // No Elements insert at head
            this.head = newNode;
            return;
        }

        GenericNode current = head;

        if (current.compareTo(data) > 0) {  // Compare head and elment if element is less update the new head

            newNode.setNextNode(current);
            head = newNode;
            return;

        }

        while (current.getNextNode() != null) {      // Middle part of a sorte link list

            if (current.getNextNode().compareTo(data) > 0) {

                newNode.setNextNode(current.getNextNode());
                current.setNextNode(newNode);
                return;
            }

            current = current.getNextNode();

        }

        // Only one element or end of the list

        if (current.compareTo(data) <= 0) {
            current.setNextNode(newNode);
        }
    }
}
