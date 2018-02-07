package graphs;

import java.util.LinkedList;
import java.util.List;

public class Graph {

    public static void main(String[] args) {

        Graph gh = new Graph(5);

        Node<Integer>  node0 = new Node<Integer>(0, 0);
        Node<Integer>  node1 = new Node<>(1, 1);

        Node<Integer>  node2 = new Node<Integer>(2, 2);
        Node<Integer>  node3 = new Node<>(3, 3);
        Node<Integer>  node4 = new Node<Integer>(4, 4);

        gh.addEdge(node0, node1);
        gh.addEdge(node0, node4);
        gh.addEdge(node1, node4);
        gh.addEdge(node1, node3);
        gh.addEdge(node1, node2);
        gh.addEdge(node2, node3);
        gh.addEdge(node3, node4);

        gh.printGraph();
    }

     static  class Node <T>{

        private  T data;
        private int id;

        public  Node (T data, int id ) {
            this.data = data;
            this.id = id;
        }

        @Override
        public String toString() {
            return "( Node ID " + this.id + " Data :" + this.data+ " ) ";

        }

        public T getData() {
            return data;
        }

        public void setData(T data) {
            this.data = data;
        }

        public int getId() {
            return id;
        }

        public void setId(int id) {
            this.id = id;
        }
    }

    private LinkedList<Node> arrayOfLinkedLists [] ;

    public Graph(int nodeCount) {
        arrayOfLinkedLists = new LinkedList[nodeCount]; // Doing this would create an array which can hold linked lists. Only Array is created

        for (int i = 0; i < nodeCount; i++)
        {
            arrayOfLinkedLists[i] = new LinkedList<Node>();
        }
    }

    public void addEdge(Node V, Node U) {

        arrayOfLinkedLists[V.getId()].add(U);
        arrayOfLinkedLists[U.getId()].add(V);

    }

    public void printGraph() {

        for (int i = 0; i < arrayOfLinkedLists.length ; i++) {

            LinkedList<Node> element = arrayOfLinkedLists[i];

            System.out.print("Node ID "+ i+ " connected to ");
            for (Node node : element
                    ) {
                System.out.print(node + " ->");
            }

            System.out.println("Null");
        }
    }

}
