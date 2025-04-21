import java.util.*;

public class Two_Sum {
	public static void main(String args[]){
		int arr[] = {11,3,7,9,14,2};
		int target = 17;
		int ans[] = new int[2]; // array to store the 2 numbers 
		
		HashMap<Integer, Integer> map = new HashMap<>();
		for(int i = 0; i < arr.length; i++){
			int sno = target - arr[i];
			if(map.containsKey(sno)){
				ans[0] = map.get(sno);
				ans[1] = i;
				break;
			}
			map.put(arr[i], i);
		}
		System.out.println(ans[0] + " " + ans[1]);		
	}
}

/*public class Two_Sum {
	public static void main(String args[]){
		int arr[] = {11,3,7,9,14,2};
		int target = 17;
		for(int i = 0 ; i < arr.length - 1; i++){
			for(int j = i+1; j < arr.length; j++){
				if(arr[i] + arr[j] == target){
					System.out.println("Indices: " + i + "," + j);
					return;
				}
			}
		}
		System.out.println("No valid pair found.");
	}
}*/

