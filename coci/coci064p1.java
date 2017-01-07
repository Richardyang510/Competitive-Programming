import java.util.*;


public class coci064p1 {

public static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        //System.out.println("");
        
        int num = input.nextInt();
        double w = input.nextInt();
        double h = input.nextInt();
        
        double max = (Math.pow(w,2)+Math.pow(h,2));
        max = Math.sqrt(max);
        
        double [] a; //declare array
        a = new double [num]; //declare size
        
        for(int i = 0;i < a.length;i++){
            a[i] = input.nextInt();
        }
        
        for(int i = 0;i < a.length;i++){
            if(a[i]<=max){
                System.out.println("DA");
            }
            else{
                System.out.println("NE");
            }
        }

    }

}
