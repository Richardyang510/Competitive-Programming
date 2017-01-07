import java.util.*;

public class ccc15j3 {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		
		String a = input.next();
		String b = "";
		for(int i = 0;i < a.length();i++){
			b = b+a.charAt(i);
			if(a.charAt(i)!='a'&&a.charAt(i)!='e'&&a.charAt(i)!='i'&&a.charAt(i)!='o'&&a.charAt(i)!='u'){
				if(a.charAt(i)=='b'){
					b = b+"ac";
				}
				else if(a.charAt(i)=='c'){
					b = b+"ad";
				}
				else if(a.charAt(i)=='d'){
					b = b+"ef";
				}
				else if(a.charAt(i)=='f'){
					b = b+"eg";
				}
				else if(a.charAt(i)=='g'){
					b = b+"eh";
				}
				else if(a.charAt(i)=='h'){
					b = b+"ij";
				}
				else if(a.charAt(i)=='j'){
					b = b+"ik";
				}
				else if(a.charAt(i)=='k'){
					b = b+"il";
				}
				else if(a.charAt(i)=='l'){
					b = b+"im";
				}
				else if(a.charAt(i)=='m'){
					b = b+"on";
				}
				else if(a.charAt(i)=='n'){
					b = b+"op";
				}
				else if(a.charAt(i)=='p'){
					b = b+"oq";
				}
				else if(a.charAt(i)=='q'){
					b = b+"oy";
				}
				else if(a.charAt(i)=='r'){
					b = b+"os";
				}
				else if(a.charAt(i)=='s'){
					b = b+"ut";
				}
				else if(a.charAt(i)=='t'){
					b = b+"uv";
				}
				else if(a.charAt(i)=='v'){
					b = b+"uw";
				}
				else if(a.charAt(i)=='w'){
					b = b+"ux";
				}
				else if(a.charAt(i)=='x'){
					b = b+"uy";
				}
				else if(a.charAt(i)=='y'){
					b = b+"uz";
				}
				else if(a.charAt(i)=='z'){
					b = b+"uz";
				}
			}

		}
		System.out.println(b);
		
	}

}
