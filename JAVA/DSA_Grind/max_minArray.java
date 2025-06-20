import java.util.*;

public class max_minArray {
	
	public static int find_mini(int arr[], int n){
		int mini = Integer.MAX_VALUE;
		for(int i = 0; i < n; i++){
			if(arr[i] < mini){
				mini = arr[i];
			}
		}
		return mini;
	}
	
	public static int find_maxi(int arr[], int n) {
		int maxi = Integer.MIN_VALUE;
		for(int i = 0; i< n; i++){
			if(arr[i] > maxi){
				maxi = arr[i];
			}
		}
		return maxi;
	}


	public static void main(String args[]) {
		int arr[] = {3,5,4,1,9};
		int size = arr.length;
		System.out.println("Mini Number is: " + find_mini(arr, size));
		System.out.println("Max number is: " + find_maxi(arr, size));
	}
}
