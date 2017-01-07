
import java.util.*;


public class ccc14j3 {

    //METHODS here

    public static void main(String[] args) {

        Scanner input = new Scanner( System.in );

        //System.out.println();

        //CODE here started 10:12
        
        int a = 100;
        int d = 100;
        
        int rounds = input.nextInt();
        rounds = rounds*2;
        
        int[] array;
        
        array = new int[rounds];
        
        for(int i =0;i<rounds;i++){
            array[i] = input.nextInt();
        }
        
        
        
        for(int j =0; j<rounds;j=j+2){
            if(array[j+1]==array[j]){
            }
            else if(array[j]>array[j+1]){
                d = d-array[j];
            }
            else if(array[j+1]>array[j]){
                a = a-array[j+1];
            }            
            
        }
        
        System.out.println(a);
        System.out.println(d);

    }

}
