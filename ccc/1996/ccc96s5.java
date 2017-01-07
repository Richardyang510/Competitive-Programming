import java.util.*;


public class ccc96s5 {

public static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        //System.out.println("");
    	
    	int num = input.nextInt();
    	int l,min,mid,max;
    	int [] x;
    	int [] y;
    	int [] dis = new int [num];
    	for(int nm = 0; nm < num; nm++){
    		l = input.nextInt();
    		x = new int [l];
    		y = new int [l];
    		for(int i = 0;i < l;i++){
    			x[i] = input.nextInt();
    		}
    		for(int i = 0;i < l;i++){
    			y[i] = input.nextInt();
    		}
    			
    		for(int i = 0;i < l;i++){
    			min = 0;
        		max = l - 1;
        		while(min<=max){
        			mid = (min+max)/2;
        			if(y[mid] >= x[i]){
        				min = mid+1;
        				if(mid - i > dis[nm]){
        					dis[nm] = mid - i;
        				}
        			}
        			else{
        				max = mid-1;
        			}
        		}
        		
    		}
    		
    		
    	}
    	for(int nm = 0; nm < num; nm++){
    		System.out.println("The maximum distance is " + dis[nm]);
    	}

	}

}
