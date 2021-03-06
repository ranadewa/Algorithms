package HackerRank;
import java.util.*;

class StuedentChecker implements Comparator<Student> {

    @Override
    public int compare(Student o1, Student o2) {

        if (o1.getCgpa() > o2.getCgpa()) {
            return 1;
        } else if (o1.getCgpa() == o2.getCgpa()) {
            return o1.getFname().compareTo(o2.getFname());
        } else {
            return -1;
        }
    }
}
class Student{
    private int id;
    private String fname;
    private double cgpa;
    public Student(int id, String fname, double cgpa) {
        super();
        this.id = id;
        this.fname = fname;
        this.cgpa = cgpa;
    }
    public int getId() {
        return id;
    }
    public String getFname() {
        return fname;
    }
    public double getCgpa() {
        return cgpa;
    }
}

//Complete the code
public class SolutionStudentSort
{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());

        List<Student> studentList = new ArrayList<Student>();
        while(testCases>0){
            int id = in.nextInt();
            String fname = in.next();
            double cgpa = in.nextDouble();

            Student st = new Student(id, fname, cgpa);
            studentList.add(st);

            testCases--;
        }

        StuedentChecker sch = new StuedentChecker();

        studentList.sort(sch);

        for(Student st: studentList){
            System.out.println(st.getFname());
        }
    }
}

