import java.util.*;

/*public class valid_pali {
	public static boolean valid(String s){
		StringBuilder res = new StringBuilder();
		res.append(s);
		return s.equals(res.reverse().toString());
	}
	
	public static void main(String args[]){
		String s = "racecar";
		if (valid(s)) {
            System.out.println(s + " is a palindrome.");
        } else {
            System.out.println(s + " is not a palindrome.");
        }
	}

}*/

public class valid_pali{
	public static boolean valid(String s){
		int low = 0;
		int high = s.length() - 1;
		
		while(low <= high){
			if(s.charAt(low) != s.charAt(high)){
				return false;
			}
			low++;
			high--;
		}
		return true;
	}
	
	public static void main(String args[]){
		String s = "racecar";
		System.out.println(valid(s));
	}
}
