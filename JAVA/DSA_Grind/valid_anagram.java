import java.util.*;

public class valid_anagram{
	public static boolean valid(String s1, String s2){
		if(s1.length() != s2.length()) return false;
		
		char[] char1 = s1.toCharArray();
		char[] char2 = s2.toCharArray();
		
		Arrays.sort(char1);
		Arrays.sort(char2);
		
		if (!Arrays.equals(char1, char2)){ 
			return false;
		}
		return true;
	}

	public static void main(String args[]){
		String s1 = "anagram";
		String s2 = "nagaram";
		System.out.println(valid(s1,s2));

	}
}
