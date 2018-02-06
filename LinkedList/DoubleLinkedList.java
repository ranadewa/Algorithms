package LinkedList;

public class DoubleLinkedList extends LinkedList {

    @Override

    public <T extends Comparable<T>> void insertAtHead(T data) {

        GenericNode<T> newNode = new GenericNode<T>(data);

        if (head == null) {
            head = newNode;
            return;
        }

        newNode.setNextNode(head);
        head.setPrevNode(newNode);
        head = newNode;
    }

    public void InsertionSort() {

        GenericNode currentNode, beforeCurrentNode = null;

        currentNode = this.head;

        while (currentNode != null) {

            beforeCurrentNode = currentNode.getPrevNode();

            while (beforeCurrentNode != null) {

                if (beforeCurrentNode.getData().compareTo(currentNode.getData()) > 0) {

                    currentNode.getPrevNode().setNextNode(currentNode.getNextNode());

                    if (currentNode.getNextNode() != null) {

                        currentNode.getNextNode().setPrevNode(currentNode.getPrevNode());
                    }

                    currentNode.setPrevNode(beforeCurrentNode.getPrevNode());

                    if (beforeCurrentNode.getPrevNode() == null) {
                        head = currentNode;
                    } else {
                        beforeCurrentNode.getPrevNode().setNextNode(currentNode);
                    }

                    currentNode.setNextNode(beforeCurrentNode);
                    beforeCurrentNode.setPrevNode(currentNode);
                }
                beforeCurrentNode = beforeCurrentNode.getPrevNode();
            }

            currentNode = currentNode.getNextNode();
        }

    }


}
