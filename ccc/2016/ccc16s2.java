import java.util.*;
import java.math.*;

public class ccc16s2 {
	
	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		int type = input.nextInt();
		int n = input.nextInt();
		int a[] = new int [n];
		int b[] = new int [n];
		int c[] = new int [n];
		for(int i = 0;i < n;i++){
			a[i] = input.nextInt();
		}
		for(int i = 0;i < n;i++){
			b[i] = input.nextInt();
		}
		Arrays.sort(a);
		Arrays.sort(b);
		for(int j = n-1, i = 0;i < n;i++,j--){
			c[i] = b[j];
		}
		int sum = 0;
		if(type == 1){
			for(int i = 0;i < n;i++){
				sum += Math.max(a[i], b[i]);
			}
		}
		else{
			for(int i = 0;i < n;i++){
				sum += Math.max(a[i], c[i]);
			}
		}
		System.out.println(sum);
		
		

	}

}
