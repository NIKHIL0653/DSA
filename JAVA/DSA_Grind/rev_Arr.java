import java.util.*;

public class rev_Arr {
	public static void reverse(int arr[], int n){
		int l = 0;
		int h = n-1;
		
		while(l < h){
			int temp = arr[l];
			arr[l] = arr[h];
			arr[h] = temp;
			
			l++;
			h--;
		}
	}


	public static void main(String args[]){
		int arr[] = {1,2,3,4,5};
		int n = arr.length;
		reverse(arr, n);
		for(int i = 0; i< n; i++){
		System.out.print(arr[i] + " ");
		}
	}
	
}
