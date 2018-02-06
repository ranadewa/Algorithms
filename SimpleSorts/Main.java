package SimpleSorts;

public class Main {

    public static void main(String[] args) {
	// write your code here

        int[] array = {10, 2, 4, 5, 3,5,40, 3, 2, 1, 9};

        BubleSort bs = new BubleSort();

        bs.print(array);
        bs.sortAsc(array);
        bs.print(array);
        bs.sortDesc(array);
        bs.print(array);
        bs.sortAsc(array);
        bs.print(array);

        int[] array1 = {10, 2, 4, 5, 3,5,40, 3, 2, 1, 9};
        SelectionSort ss = new SelectionSort();

        ss.print(array1);
        ss.sortAsc(array1);
        ss.print(array1);
        ss.sortDesc(array1);
        ss.print(array1);

        int[] array3 = {10, 2, 4, 5, 3,5,40, 3, 2, 1, 9};

        InsersionSort is = new InsersionSort();
        is.print(array3);
        is.sortAsc(array3);
        is.print(array3);
        is.sortDesc(array3);
        is.print(array3);
    }
}
