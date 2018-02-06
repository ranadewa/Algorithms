package LinkedList;



public class GenericNode <T extends  Comparable<T>> implements Comparable<T> {

    public  GenericNode(T data) {
        this.data = data;
    }
    private T data;
    private GenericNode nextNode = null;
    private GenericNode prevNode = null;


    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }

    public GenericNode getNextNode() {
        return nextNode;
    }

    public void setNextNode(GenericNode nextNode) {
        this.nextNode = nextNode;
        System.out.println(this +" next node "+ nextNode);
    }

    @Override
    public String toString() {
        return "Data : " + getData();
    }


    @Override
    public int compareTo(T o) {
        return this.getData().compareTo(o);
    }

    public GenericNode getPrevNode() {
        return prevNode;
    }

    public void setPrevNode(GenericNode prevNode) {
        this.prevNode = prevNode;

        System.out.println(this +" Prev node "+ prevNode);
    }
}
