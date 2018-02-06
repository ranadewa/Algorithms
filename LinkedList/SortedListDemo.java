package LinkedList;

public class SortedListDemo {


    public static void main(String[] args) {

        SortedLinkList sl = new SortedLinkList();

        sl.insertAtHead("Apple");
        sl.insertAtHead("banana");
        sl.insertAtHead("Mango");
        sl.insertAtHead("Ann");

        System.out.println(sl);

        SortedLinkList sl1 = new SortedLinkList();

        sl1.insertAtHead(9.34);
        sl1.insertAtHead(9.35);
        sl1.insertAtHead(9.31);
        sl1.insertAtHead(9.32);
        sl1.insertAtHead(9.39);

        System.out.println(sl1);


    }
}
