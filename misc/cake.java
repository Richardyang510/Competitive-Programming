import java.io.*;
import java.util.StringTokenizer;

public class cake {
	
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {
		StringTokenizer tk = new StringTokenizer(br.readLine());
		int n, m, k;
		n = Integer.valueOf(Integer.valueOf(tk.nextToken()));
		m = Integer.valueOf(Integer.valueOf(tk.nextToken()));
		k = Integer.valueOf(Integer.valueOf(tk.nextToken()));
		
		long dif[][] = new long [n][m];
		
		for(int i = 0;i < k;i++){
			int x1,x2,y1,y2;
			tk = new StringTokenizer(br.readLine());
			x1 = Integer.valueOf(tk.nextToken()) - 1;
			y1 = Integer.valueOf(tk.nextToken()) - 1;
			x2 = Integer.valueOf(tk.nextToken()) - 1;
			y2 = Integer.valueOf(tk.nextToken()) - 1;
			for(int j = y1;j <= y2;j++){
				dif[x1][j]--;
				if(x2 < n-1){
					dif[x2+1][j]++;
				}
			}
		}
		
		long val[][] = new long [n][m];
		for(int i = 0;i < m;i++){
			int value = 0;
			for(int j = 0;j < n;j++){
				value -= dif[j][i];
				val[j][i] = value;
			}
		}
		
		long sum[][] = new long [n][m];
		for(int i = 0;i < m;i++){
			sum[0][i] = val[0][i];
			for(int j = 1;j < n;j++){
				sum[j][i] = sum[j-1][i] + val[j][i];
			}
		}
		k = Integer.valueOf(br.readLine());
		for(int i = 0;i < k;i++){
			int x1,x2,y1,y2;
			tk = new StringTokenizer(br.readLine());
			x1 = Integer.valueOf(tk.nextToken()) - 1;
			y1 = Integer.valueOf(tk.nextToken()) - 1;
			x2 = Integer.valueOf(tk.nextToken()) - 1;
			y2 = Integer.valueOf(tk.nextToken()) - 1;
			long result = 0;
			for(int j = y1;j <= y2;j++){
				if(x1 == 0){
					result += sum[x2][j];
				}
				else{
					result += sum[x2][j] - sum[x1-1][j];
				}
				
			}
			System.out.println(result);
		}

//		for(int i = 0;i < m;i++){
//			for(int j = 0;j < n;j++){
//				System.out.print(val[j][i] + " ");
//			}
//			System.out.println();
//		}
	}

}
