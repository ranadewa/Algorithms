package StacksAndQues;

import java.lang.reflect.Array;
import java.util.ArrayList;

public class Stack <E> {

    private E[] array = null;
    private int botom = -1;
    private int maxSize = 0;

    public static void main(String[] args) {


       // Stack<Integer> stack = new Stack<Integer>(ar, 5)
    }
    public Stack(Class <E> c, int maxSize) {

        @SuppressWarnings("unchecked")
        final E[] a = (E[]) Array.newInstance(c, maxSize);

        this.array = a;
        this.maxSize = maxSize;
    }

    public <E> void push(E element) {

        if (botom < maxSize) {
            Array.set(array,botom,element);
            botom++;
        }
    }

    public <E> E push() {

        E element = (E) Array.get(array, botom);
        botom --;

        return element;
    }

    public <E> E peek() {
        return (E) Array.get(array, botom);
    }
}
