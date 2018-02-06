package Recursion;



class Tower{

    String Name;

    public Tower(String stirng) {
        this.Name = stirng;

    }
    @Override
    public String toString(){

        return ("Tower " + Name);
    }

}


public class TowerOfHanoi {

    // A, B. C

    public static void main(String[] args) {
        Tower A = new Tower("A");
        Tower B = new Tower("B");
        Tower C = new Tower("C");


        Move(4, A, C, B);

    }

    public static void Move(int numDiscs, Tower A, Tower C, Tower B) {

        if (numDiscs == 0) {
            return;
        }

        Move(numDiscs -1, A, B, C);

        System.out.println("Moved disk " +numDiscs+" from " + A + " to " + C + " Using " + B);

        Move(numDiscs - 1, B, C, A);



        }
}
