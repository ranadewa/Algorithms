package Recursion;

import javax.swing.undo.UndoManager;
import javax.xml.bind.SchemaOutputResolver;

public class MergeSort {

    public static void main(String[] args) {
        MergeSort ms = new MergeSort();

        int[] array = {3, 1, 5, 7, 1, 2};

        ms.print(array);
        ms.doMergeSort(array,0, array.length-1);
        ms.print(array);

    }

    public void print(int[] Array){
        for (int i : Array
                ) {
            System.out.print(i +", ");
        }
        System.out.println();
    }



    public  void doMergeSort(int [] array, int startIndex, int endIndex)  {

        if (startIndex < endIndex) {

            int middleIndex = (int)Math.floor((startIndex + endIndex) / 2);

            doMergeSort(array, startIndex, middleIndex);
            doMergeSort(array, middleIndex+1 , endIndex);

            Merge(array, startIndex, middleIndex, endIndex);
        }
    }

    private   void Merge(int [] array, int startIndex, int middleIndex, int endIndex) {

        int sizeofLeft = middleIndex - startIndex + 1;
        int sizeOfRight = endIndex - middleIndex;

        int[] leftArray = new int[sizeofLeft];
        int[] rightArray = new int[sizeOfRight];

      //  System.out.println("array = [" + array + "], startIndex = [" + startIndex + "], middleIndex = [" + middleIndex + "], endIndex = [" + endIndex + "]");

        System.out.print("Left Array ");
        for (int i = 0; i <sizeofLeft; i++) {

          leftArray[i] = array[startIndex + i];
            System.out.print(leftArray[i]+ " ");
        }

        System.out.print("\n Right Array ");
        for (int i = 0; i < sizeOfRight; i++) {
            rightArray[i] = array[middleIndex + 1 + i];
            System.out.print(rightArray[i]+ " ");
    }

        System.out.println();
        int i =0, j=0;

        System.out.println("Built Array");

        for (int k = startIndex; k <= endIndex; k++) {


            if ((j >= sizeOfRight) || (  i < sizeofLeft && leftArray[i] <= rightArray[j])) {
                    array[k] = leftArray[i];
                    i++;
                } else {
                    array[k] = rightArray[j];

                    j++;
                }

            System.out.print(array[k]+ " ");

        }
        System.out.println();
    }
}
