import java.util.*;
 
public class ccc03s3 {
 
    static Scanner input = new Scanner(System.in);
    
    static int r, c;
    static int [][]f;
    
    public static void setRooms(int x, int y, int count){
    
        if(x >= 0 && x < r && y >= 0 && y < c && f[x][y] == 0){
            f[x][y] = count;
            setRooms(x-1, y,count);
            setRooms(x+1, y,count);
            setRooms(x, y-1,count);
            setRooms(x, y+1,count);
        }
    }
 
    public static void main(String[] args) {
        int n = input.nextInt();
        r = input.nextInt();
        c = input.nextInt();
        f = new int [r][c];
        for(int i = 0;i < r;i++){
            String t = input.next();
            for(int j = 0;j < c;j++){
                if(t.charAt(j) == 'I'){
                    f[i][j] = -1;
                }
            }
        }
        
        int k = 1;
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                if(f[i][j] == 0){
                    setRooms(i, j, k);
                    k++;
                }
            }
        }
        
        int [] room = new int [k+1];
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                if(f[i][j] != -1){
                    room[f[i][j]]++;
                }
            }
        }
        
        int temp, j1;
 
        for (int i = 1; i < room.length; i++) {
            temp = room[i];
            for (j1 = i; j1 > 0 && room[j1 - 1] < temp; j1--) {
                room[j1] = room[j1 - 1];
            }
            room[j1] = temp;
 
        }
        
        int rooms = 0;
        
        for(int i = 0;i < k-1;i++){
            if(n < room[i]){
                break;
            }
            else{
                n -= room[i];
                rooms++;
            }
        }
        if(rooms == 1){
        	System.out.println(rooms +" room, "+n+" square metre(s) left over");
        }
        else{
        	System.out.println(rooms +" rooms, "+n+" square metre(s) left over");
        }
        
    }
}
