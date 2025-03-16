package OOPS;

public class DSA {
    public static void main(String[] args) {
        // 31, 45, 22, 98, 10
        int[] numbers = new int[5];

        numbers[0] = 31;
        numbers[1] = 45;
        numbers[2] = 22;
        numbers[3] = 98;
        numbers[4] = 10;

        // OR

        int[] numbers2 = {31,45,22,98,10};

        String[] candy = {"Twix", "Skittles", "Snickers", "Hershey's", "Crunch"};
        System.out.println(candy[1]);
        // we can also change the items
        candy[2] = "Butterfingers";
        System.out.println(candy[2]);
        System.out.println(candy.length);
        ;
    }
}
