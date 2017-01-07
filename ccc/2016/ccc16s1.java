import java.util.*;

public class ccc16s1 {

	static Scanner input = new Scanner(System.in);
	
	public static String replaceCharAt(String str, int at, char n){
		StringBuilder a = new StringBuilder(str);
		a.setCharAt(at, n);
		str = a.toString();
		return str;
	}
	
	public static int countOccurrences(String haystack, char needle){
	    int count = 0;
	    for (int i=0; i < haystack.length(); i++){
	        if (haystack.charAt(i) == needle){
	             count++;
	        }
	    }
	    return count;
	}

	public static void main(String[] args) {
		
		String a = input.next();
		String b = input.next();
		
		int l = a.length();
		
		for(int i = 0;i < l;i++){
			for(int j = 0;j < l;j++){
				if(a.charAt(i) == b.charAt(j)){
					a = replaceCharAt(a, i, '0');
					b = replaceCharAt(b, j, '0');
					break;
				}
			}
		}
		a = a.replaceAll("0", "");
		b = b.replaceAll("0", "");
		
		int count = countOccurrences(b,'*');
		
		if(a == b){
			System.out.println("A");
		}
		else if(a.length() == count){
			System.out.println("A");
		}
		else{
			System.out.println("N");
		}
		
		

	}
}
