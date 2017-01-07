import java.util.*;
import java.lang.String;

public class ccc15j2 {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int h=0,s=0,l;
		String a = input.nextLine();
		a = a.replace(')','h');
		a = a.replace('(','s');
		if(a.contains(":-h")==false && a.contains(":-s")==false){
			System.out.println("none");
		}else{
			while(a.indexOf(":-h")!=-1){
				h++;
				a = a.replaceFirst(":-h", "happy");
			}
			while(a.indexOf(":-s")!=-1){
				s++;
				a = a.replaceFirst(":-s", "sad");
			}
			if(h>s){
				System.out.println("happy");
			}
			else if(s>h){
				System.out.println("sad");
			}
			else if(s==h){
				System.out.println("unsure");
			}
		}
		

	}

}
