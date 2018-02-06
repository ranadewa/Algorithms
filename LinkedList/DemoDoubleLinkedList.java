package LinkedList;

public class DemoDoubleLinkedList {

    public static void main(String[] args) {

        DoubleLinkedList dll = new DoubleLinkedList();

        dll.insertAtHead(57);
        dll.insertAtHead(7);
        dll.insertAtHead(37);
        dll.insertAtHead(27);
        dll.insertAtHead(57);
        dll.insertAtHead(527);
        dll.insertAtHead(67);
        dll.insertAtHead(137);
        dll.insertAtHead(247);
        dll.insertAtHead(507);

        System.out.println(dll);

        dll.InsertionSort();

        System.out.println(dll);
    }
}
