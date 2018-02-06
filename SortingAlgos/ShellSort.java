package SortingAlgos;

import SimpleSorts.SortingMethod;

import java.util.ArrayList;

public class ShellSort extends SortingMethod{

    public static void main(String[] args) {

        int[] array = {4, 2, 10, 1, 5, 90, 2, 3, 5, 1};

       ShellSort ss = new ShellSort();

       ss.print(array);

    }

    @Override
    protected void sort(int[] array, boolean isAscending) {

        int h = 1;
        ArrayList<Integer> al = new ArrayList<>();

        while (h <= array.length) {
            al.add(h);
            h = 3*h +1;
        }

        for (int i = al.get(al.size() -1); i > 0 ; i--) {

            for (int j = 0; j < array.length; ) {

                j += al.get(i);
            }
        }

    }
}
