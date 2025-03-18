import java.util.*;

public class Sum {
    public static int calcSum(int a, int b){
        int calc = a + b;
        return calc;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int sum = calcSum(a,b);
        System.out.println("Sum of 2 nums is: " + sum);
    }
}
