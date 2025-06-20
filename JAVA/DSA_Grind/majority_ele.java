// frq. of element should be greater than n/2
// Moore's voting algorithm

// File: MajorityElement.java
import java.util.*;

public class majority_ele {
    public static int findMajorityElement(int[] nums) {
        Map<Integer, Integer> countMap = new HashMap<>();
        int majorityCount = nums.length / 2;

        for (int num : nums) {
            int count = countMap.getOrDefault(num, 0) + 1;
            countMap.put(num, count);

            if (count > majorityCount) {
                return num;
            }
        }

        return -1; // No majority element
    }

    public static void main(String[] args) {
        int[] arr = {5,7,4,7,4,4,5,4,4,7,4,4};
        int majority = findMajorityElement(arr);

        if (majority != -1) {
            System.out.println("Majority element: " + majority);
        } else {
            System.out.println("No majority element found.");
        }
    }
}


/*public class majority_ele {
	public static int majority(int arr[], int n){
		int candidate = arr[0];
		int count = 1;
		
		for(int i = 1; i < n; i++){
			if(arr[i] == candidate){
				count++;
			}
			else{
				count--;
			}
			if(count == 0){
				candidate = arr[i];
				count = 1;
			}
		}
		count = 0;
		for(int val : arr){
			if(val == candidate){
				count++;
			}
			
		}
		if(count > n/2){
			return candidate;
		}
		else{
			return -1;
		}
	}
	
	public static void main(String args[]){
		int arr[] = {5,7,4,7,4,4,5,4,4,7,4,4};
		System.out.println(majority(arr, arr.length));
		
	}
}*/


