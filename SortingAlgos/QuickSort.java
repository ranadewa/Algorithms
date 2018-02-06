package SortingAlgos;

import SimpleSorts.SortingMethod;

public class QuickSort extends SortingMethod {

    public static void main(String[] args) {

        int[] array = {4,1,6,70,3,5,1};

        QuickSort qs = new QuickSort();

        qs.sort(array);

        qs.print(array);
    }



    private void sort(int[] array, int startIndex, int endIndex) {

        if (startIndex < endIndex) {

            int pivot = partition(array, startIndex, endIndex);

            sort(array, startIndex, pivot -1 );
            sort(array, pivot + 1, endIndex);
        }
    }

    private int partition(int[] array, int startIndex, int endIndex) {

        int pivot = array[endIndex];

        int i = startIndex, j = startIndex;
        int temp = 0;

        for (; j < endIndex; j++) {

            if (array[j] <= pivot) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;

                i++;
            }
        }

        temp = array[i];
        array[i] = pivot;
        array[endIndex] = temp;

        return i;

    }

    public  void sort(int[] array) {

        sort(array, 0, array.length -1);
    }

    @Override
    protected void sort(int[] array, boolean isAscending) {

    }
}
