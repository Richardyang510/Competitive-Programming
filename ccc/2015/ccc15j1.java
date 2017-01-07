import java.util.*;

public class ccc15j1 {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int m = input.nextInt();
		int d = input.nextInt();
		
		if(m<2){
			System.out.println("Before");
		}
		else if(m>2){
			System.out.println("After");
		}
		else if(m == 2){
			if(d<18){
				System.out.println("Before");
			}
			else if(d > 18){
				System.out.println("After");
			}
			else if(d == 18){
				System.out.println("Special");
			}
		}

	}

}
