import java.util.*;

public class Functions {
    public static void PrintName(String name){
        System.out.println(name);
        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        PrintName(name);
    }
}

// functions are saved as a stack in the memory
// when one thing gets saved in the stack it's called stack frame
