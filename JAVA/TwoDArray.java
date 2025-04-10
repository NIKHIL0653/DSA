import java.util.*;

public class TwoDArray {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int rows = sc.nextInt();
		int cols = sc.nextInt();
		
		int[][] numbers = new int[rows][cols];
		// we have now defind the 2d array
		
		// now we take the input
		for(int i = 0; i< rows; i++){
			for(int j = 0; j<cols; j++){
			numbers[i][j] = sc.nextInt();
			}
		}
		
		// find and print position of element
		int x = sc.nextInt();
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < cols; j++){
				if (numbers[i][j] == x){
					System.out.println("x found at (" + i + "," + j + ")");
					}
				}
			}
				
		
		//output
		
		for(int i = 0; i < rows; i++){
			for(int j = 0; j< cols; j++){
				System.out.print(numbers[i][j] + " ");
				}
			
		System.out.println();
		}
	}
}
		
