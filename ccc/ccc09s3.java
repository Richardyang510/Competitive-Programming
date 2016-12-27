import java.io.*;
import java.util.*;

public class ccc09s3 {
	
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	static int am[][] = new int[50][50];
	
	public static void i(int x, int y){
		am[x][y] = 1;
		am[y][x] = 1;
	}
	
	public static void d(int x, int y){
		am[x][y] = 0;
		am[y][x] = 0;
	}
	
	public static void n(int x){
		int c = 0;
		for(int i = 0;i < 50;i++){
			if(am[x][i] == 1 && x != i){
				c++;
			}
		}
		System.out.println(c);
	}
	
	public static void f(int x){
		int c = 0;
		int d[] = new int [50];
		for(int i = 0;i < 50;i++){
			d[i] = 100;
		}
		d[x] = 0;
		for(int i = 0;i < 50;i++){
			for(int v = 0;v < 50;v++){
				for(int j = 0;j < 50;j++){
					if(am[v][j] == 1){
						d[j] = Math.min(d[j], d[v] + am[v][j]);
					}
				}
			}
		}
		for(int i = 0;i < 50;i++){
			if(d[i] == 2){
				c++;
			}
		}
		System.out.println(c);
	}
	
	public static void s(int x, int y){
		int d[] = new int [50];
		for(int i = 0;i < 50;i++){
			d[i] = 100;
		}
		d[x] = 0;
		for(int i = 0;i < 50;i++){
			for(int v = 0;v < 50;v++){
				for(int j = 0;j < 50;j++){
					if(am[v][j] == 1){
						d[j] = Math.min(d[j], d[v] + am[v][j]);
					}
				}
			}
		}
		if(d[y] == 100){
			System.out.println("Not connected");
		}
		else{
			System.out.println(d[y]);
		}
	}
	
	public static void main(String[] args) throws IOException {
		i(1,6);
		i(2,6);
		i(3,6);
		i(4,6);
		i(5,6);	
		i(3,5);	
		i(6,7);
		i(7,8);
		i(8,9);
		i(9,10);
		i(10,11);
		i(11,12);
		i(9,12);
		i(12,13);
		i(13,14);
		i(13,15);
		i(15,3);
		i(16,17);
		i(17,18);
		i(18,16);
		i(3,4);
		i(4,5);
		
		while(true){
			String s = br.readLine();
			if(s.equals("q")){
				break;
			}else if(s.equals("i")){
				int x = Integer.valueOf(br.readLine());
				int y = Integer.valueOf(br.readLine());
				i(x,y);
			}else if(s.equals("d")){
				int x = Integer.valueOf(br.readLine());
				int y = Integer.valueOf(br.readLine());
				d(x,y);
			}
			else if(s.equals("n")){
				int x = Integer.valueOf(br.readLine());
				n(x);
			}else if(s.equals("f")){
				int x = Integer.valueOf(br.readLine());
				f(x);
			}else if(s.equals("s")){
				int x = Integer.valueOf(br.readLine());
				int y = Integer.valueOf(br.readLine());
				s(x,y);
			}
		}
	}

}
