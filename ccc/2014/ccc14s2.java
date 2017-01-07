import java.util.*;


public class ccc14s2 {

    //METHODS here

    public static void main(String[] args) {

        Scanner input = new Scanner( System.in );

        //System.out.println();

        int l = input.nextInt();
        boolean good = false;
        boolean two = false;
        boolean match = false;
        
        String a [];
        a = new String [l];
        
        String b [];
        b = new String [l];
        
        String c [];
        c = new String [l];
        
        String d [];
        d = new String [l];
        
        for(int i = 0; i < l; i ++){
            a[i] = input.next();
        }
        for(int i = l-1; i >= 0; i--){
            b[i] = input.next();
        }
        for(int i = 0; i < l; i ++){
            c[i]= a[i]+b[l-(i+1)];
            if(a[i].equals(b[l-(i+1)])){
                good = false;
                two = true;               
            }
        }
        for(int i = 0; i < l; i ++){
            d[i]= b[i]+a[l-(i+1)];
            if(b[i].equals(a[l-(i+1)])){
                good = false;
                two = true;
            }
        }
        for(int i = 0; i < l; i++){
            match = false;
            for(int j = 0; j < l;j++){
                if(c[i].equals(d[j])){
                    good = true;
                    match = true;
                }
            }
            if(match == false){
                good = false;
                break;
            }
        }
        
        
        if(good == true && two == false){
            System.out.println("good");
        }
        else if(good == false || two == true){
            System.out.println("bad");
        }
        
    }

}
