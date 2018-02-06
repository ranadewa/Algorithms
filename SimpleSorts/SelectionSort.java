package SimpleSorts;



public class SelectionSort extends SortingMethod {

    @Override
    protected void sort(int[] array, boolean isAscending) {

        System.out.println("SelectionSort.sort");

        for (int outerIndex = 0; outerIndex < array.length ; outerIndex++)
        {
            int chosenIndex = outerIndex;

            for (int innerIndex =outerIndex+1; innerIndex < array.length ; innerIndex++)
            {
                if (compare(isAscending,array[chosenIndex] , array[innerIndex])) {
                    chosenIndex = innerIndex;
                }
            }


            int temp = array[outerIndex];
            array[outerIndex] = array[chosenIndex];
            array[chosenIndex] = temp;

        }
    }
}
