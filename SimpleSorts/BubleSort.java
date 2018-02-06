package SimpleSorts;

public class BubleSort extends SortingMethod {
    @Override
    protected void sort(int[] array, boolean isAscending) {

        for (int outerIndex = 0; outerIndex < array.length - 1; outerIndex++) {

            for (int innerIndex = 0; innerIndex < array.length - 1 - outerIndex; innerIndex++) {

                if (compare(isAscending, array[innerIndex], array[innerIndex + 1])) {
                    int temp = array[innerIndex];
                    array[innerIndex] = array[innerIndex + 1];
                    array[innerIndex + 1] = temp;
                }
            }

        }
    }
}

