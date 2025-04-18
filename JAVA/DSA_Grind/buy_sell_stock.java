import java.util.*;

public class buy_sell_stock {
	public static void main(String args[]){
		//int buy = 0;
		//int sell = 1;
		
		int prices[] = {7,1,5,3,6,4};
		int n = prices.length;
		int mini = prices[0];
		int profit = 0;
		
		for(int i = 0; i < n-1 ;i++){
			int cost = prices[i] - mini;
			profit = Math.max(profit, cost);
			mini = Math.min(mini, prices[i]);
		}
		System.out.println("The maximum profit is: " + profit);
		
		
	}
}
