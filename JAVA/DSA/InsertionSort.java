package DSA;

/*
There are 2 parts, sorted and unsorted part
we pickup the element from the unsorted part and place it in the sorted
part, and shift the adjacent elements forward filling up the blank space.
 */

public class InsertionSort {
    public static void printArray(int arr[]){
        for(int i = 0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String args[]){
        int arr[] = {7,9,8,3,2,1};

        for(int i = 0; i< arr.length; i++){
            int current = arr[i];
            int j = i - 1;
            while(j >= 0 && current < arr[j]){
                arr[j+1] = arr[j];
                j--;
            }
            //placement
            arr[j+1] = current;
        }
        printArray(arr);
    }
}
