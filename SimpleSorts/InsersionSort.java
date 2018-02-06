package SimpleSorts;

public class InsersionSort extends SortingMethod {
    @Override
    protected void sort(int[] array, boolean isAscending) {
        System.out.println("InsersionSort.sort");

        for (int outerIndex = 1; outerIndex < array.length ; outerIndex++)
        {
            int outer = array[outerIndex];
            int innerIndex = outerIndex -1;

            while (innerIndex >= 0 && (compare(isAscending, array[innerIndex], outer)) ) {
                array[innerIndex+1] = array[innerIndex];
                innerIndex --;
            }

            array[innerIndex+1] = outer;
        }
    }
}
