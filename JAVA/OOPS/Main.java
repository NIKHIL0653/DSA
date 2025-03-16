package OOPS;

import java.awt.*;
import java.util.*;

//public class Main {
//    public static void main(String[] args) {
//        // the car class was the blueprint of our cars
//        // describing how we make our cars
//
//        // in the main file we build the car
//
//        Car myCar = new Car(25.5, "1BC32E",
//                Color.BLUE, true);
//        Car sallyCar = new Car(13.9, "3D20BN",Color.BLACK, false);
//
//        System.out.println(myCar.LicensePlate);
//        System.out.println(sallyCar.LicensePlate);
//
//    }
//}

//public class Main {
//    public static void main(String[] args) {
//        String userInput = "entertainment";
//        String upperCased = userInput.toUpperCase();
//        System.out.println(upperCased);
//
//        char firstChar = upperCased.charAt(0);
//        System.out.println(firstChar);
//
//        System.out.println("Contains: " + userInput.contains("Enter".toLowerCase())); // outputs true/false
//        //String are immutable
//    }
//}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int userNumber = sc.nextInt();
        System.out.println(userNumber);

        double userNumber2 = sc.nextDouble();
        System.out.println(userNumber2);
    }
}
