package LinkedList;

public class Main {

    public static void main(String[] args) {

        LinkedList ll = new LinkedList();

        ll.printList();
        ll.insertAtHead(5);
        ll.printList();
        ll.insertAtHead(8);
        ll.printList();

        ll.insertAtHead(18);
        ll.insertAtHead(38);
        ll.insertAtHead(48);

        System.out.println(ll);

        ll.deleteHead();
        System.out.println(ll);

        System.out.println("Found " + ll.find(8));

        System.out.println("Size : " + ll.getSize());

        DoubleEndedLinkedList dll = new DoubleEndedLinkedList();

        dll.insertAtHead(11.34);
        dll.insertAtHead(15.5);
        dll.insertAtHead(23.5);

        System.out.println("DELL : " + dll);

        dll.insertAtTail(23.51);

        System.out.println("DELL : "+ dll);


    }


}
