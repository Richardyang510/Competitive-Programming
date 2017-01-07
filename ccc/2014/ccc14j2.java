import java.util.*;
public class ccc14j2 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int l = input.nextInt();
		String vote = input.next();
		int a = 0, b = 0;
		for(int i = 0;i < l;i++){
			if(vote.charAt(i) == 'A'){
				a++;
			}
			else if(vote.charAt(i) == 'B'){
				b++;
			}
		}
		if(a==b){
			System.out.println("Tie");
		}
		else if(a>b){
			System.out.println("A");
		}
		else if(b>a){
			System.out.println("B");
		}
		
	}

}
