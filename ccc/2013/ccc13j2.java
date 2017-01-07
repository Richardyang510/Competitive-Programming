import java.util.*;


public class ccc13j2 {

public static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        //System.out.println("");
        
        String in = input.next();
        String out = "";
        
        in = in.replaceAll("I", ".");
        in = in.replaceAll("O", ".");
        in = in.replaceAll("S", ".");
        in = in.replaceAll("H", ".");
        in = in.replaceAll("Z", ".");
        in = in.replaceAll("N", ".");
        in = in.replaceAll("X", ".");
        
        for(int i = 0; i < in.length(); i++){
            out = out + ".";
        }
        
        if(in.equals(out)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
        
        

    }

}
