package SimpleSorts;

public abstract class SortingMethod {
    protected abstract void sort(int[] array, boolean isAscending);

    public void sortAsc(int[] array) { sort(array, true);};
    public void sortDesc(int[] array){ sort(array, false);};

    public void print(int[] array){
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    };

    protected void swap(int i ,  int  j) {

    }
    protected boolean compare(boolean greater, int num1, int num2) {

        if (greater == true && num1 > num2) {
            return  true;
        } else if (greater == false && num1 < num2) {
            return true;
        }

        return  false;

    }
}
