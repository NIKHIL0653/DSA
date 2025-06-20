package DSA;

public class reverse_Array {

    public static int reverse(int arr[], int n){
        int low = 0;
        int high = n;

        while(low <= high){
            for(int high = arr.length; high >= 0; high--){
                int temp = arr[low];
                int arr[low] = arr[high];
                int arr[high] = temp;
            }
        }
    }

    public static void main(String args[]){
        int arr[] = {1,4,3,2,6,5};
        int n = arr.length;
        
    }
}
