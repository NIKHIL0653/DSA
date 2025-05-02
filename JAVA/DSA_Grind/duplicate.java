import java.util.*;

/*public class duplicate {
	public static boolean duplicate(int arr[], int n){
		Arrays.sort(arr);
		for(int i = 0; i< n-1; i++){
			if(arr[i] == arr[i+1]) return true;
		}
		return false;
	}
	
	public static void main(String args[]){
		//HashMap<Integer, Integer> map;
		int arr[] = {4,2,5,1,3,4};
		int n = arr.length;
		System.out.println(duplicate(arr, n));
	}
}*/

public class duplicate {
	public static boolean duplicate(int arr[], int n){
		HashSet <Integer> map = new HashSet<>();
		
		for(int num: arr){
			if(map.contains(num)){
				return true;
			}
		map.add(num);
		}
		return false;
	}	
	
	public static void main(String args[]){
		int arr[] = {3,5,1,2,4};
		int n = arr.length;
		System.out.println(duplicate(arr, n));
	}
}
