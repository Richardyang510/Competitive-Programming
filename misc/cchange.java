import java.util.Arrays;
import java.util.Scanner;

public class cchange {

	public static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args) {
		int x = input.nextInt(),n = input.nextInt();
	    int []cash = new int[n];
	    for(int i = 0;i < n;i++){
	        cash[i] = input.nextInt();
	    }
	    Arrays.sort(cash);
	    int []c = new int[x+1];
	    c[0] = 0;
	    for(int i = 1;i <= x;i++){
	    	c[i] = x+1;
	    	for(int j = 0;j < n;j++){
	    		if(cash[j] <= i){
	    			c[i] = Math.min(c[i], c[i-cash[j]]+1);
	    		}
	    	}
	    }
	    System.out.println(c[x]);
	}

}
