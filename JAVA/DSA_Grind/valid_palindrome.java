import java.util.*;

public class valid_palindrome {
	public static bool check(String s){
		int l = 0;
		int h = s.length - 1;
		
		while(l <= h){
			if(s[l] == s[h]){
				return true;
				l++;
				h--;
			}
		}
	}
	
	
	public static void main(String args[]){
		String s = "race a car";
		System.out.println(check);
		
		
	}

}
