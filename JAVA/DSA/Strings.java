package DSA;
import java.util.*;

public class Strings {
    public static void main(String args[]){
//        Scanner sc = new Scanner(System.in);
//        String name = sc.nextLine();
//        System.out.println("Your name is: "+ name);
        String fname = "tony";
        String lname = "stark";
        String fullName = fname + " " + lname;
        System.out.println(fullName.length());

        for(int i = 0; i < fullName.length(); i++){
            System.out.println(fullName.charAt(i));
        }
    }
    // String Declaration
}
