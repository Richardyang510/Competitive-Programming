import java.io.*;
import java.util.*;

public class ccc00s3{
	
	static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	
	static String sites[] = new String [101];
	static int siteNum = 0;
	static int am[][] = new int [101][101];;
	
	public static int N(String site){
		for(int i = 0;i < 101;i++){
			if(sites[i].equals(site)){
				return i;
			}
		}
		return -1;
	}
	
	public static boolean contain(String site){
		for(int i = 0;i < 101;i++){
			if(sites[i].equals(site)){
				return true;
			}
		}
		return false;
	}
	
	public static boolean BFS(int s, int d){
		boolean v[] = new boolean[siteNum+1];
		LinkedList<Integer> queue = new LinkedList<Integer>();
		queue.add(s);
		while(!queue.isEmpty()){
			int n = queue.poll();
			v[n] = true;
			for(int i = 0;i < siteNum+1;i++){
				if(!v[i] && am[n][i] == 1){
					queue.push(i);
				}
			}
		}
		return v[d];
	}
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		int n = Integer.valueOf(in.readLine().replaceAll("\\s+",""));
		for(int i = 0;i < 101;i++){
			sites[i] = "";
		}
		for(int i = 0;i < 101;i++){
			for(int j = 0;j < 101;j++){
				am[i][j] = 0;
			}
		}
		for(int i = 0;i < n;i++){
			String url = in.readLine().replaceAll("\\s+","");
			if(!contain(url)){
				sites[siteNum] = url;
				siteNum++;
			}
			while(true){
				String line = in.readLine();
				//System.out.println(line);
				while(line.contains("<A HREF=")){
					String url2 = line.substring(line.indexOf("<A HREF="), line.indexOf("\">")+1);
					line = line.substring(line.indexOf("\">")+1);
					url2 = url2.substring(url2.indexOf("\"")+1, url2.lastIndexOf("\""));
					if(!contain(url2)){
						sites[siteNum] = url2;
						siteNum++;
					}
					am[N(url)][N(url2)] = 1;
					System.out.println("Link from " + url + " to " + url2);
					if(!line.contains("<A HREF=")){
						break;
					}
				}
				if(line.contains("</HTML>")){
					break;
				}
			}
		}
		while(true){
			String u1 = in.readLine().replaceAll("\\s+","");
			if(u1.equals("TheEnd")){
				break;
			}
			String u2 = in.readLine().replaceAll("\\s+","");
			int i1 = N(u1);
			int i2 = N(u2);
			if(BFS(i1,i2)){
				System.out.println("Can surf from "+u1+" to " +u2);
			}
			else{
				System.out.println("Can't surf from "+u1+" to " +u2);
			}
		}
	}

}
