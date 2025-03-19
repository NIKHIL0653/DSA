package DSA;
import java.util.*;

public class Arrays {
    public static void main(String args[]){
//        int[] marks = new int[3];
//        marks[0] = 98;
//        marks[1] = 99;
//        marks[2] = 91;
//        System.out.println(marks[0]);
        // printing only marks will give us a mixture od class name and hash code (jargon)
        // to print single element we use [] and specify the index number

        // other method of declaring and initiating values
//        Scanner sc = new Scanner(System.in);
//        int size = sc.nextInt();
//        int numbers[] = new int[size];
//
//        for(int i = 0; i < size; i++){
//            System.out.println(numbers[i]);
            // if we run the above code and provide a size value we get that many zeros
            // because in java by default an array gets initialized with 0
            //int -> 0, float -> 0.00, -> bool -> false
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int numbers[] = new int[size];

        //take values
        for(int i = 0; i< size; i++){
            numbers[i] = sc.nextInt();
        }

        for(int i = 0; i < size; i++){
            System.out.println(numbers[i]);
        }
    }
}
