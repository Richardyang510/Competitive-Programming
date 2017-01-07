import java.io.*;
import java.util.*;

public class ccc01s3 {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	static int am[][] = new int[26][26];

	public static boolean BFS(int s, int d) {
		boolean v[] = new boolean[26];
		LinkedList<Integer> queue = new LinkedList<Integer>();
		queue.add(s);
		while (!queue.isEmpty()) {
			int n = queue.poll();
			v[n] = true;
			for (int i = 0; i < 26; i++) {
				if (!v[i] && am[n][i] == 1) {
					queue.push(i);
				}
			}
		}
		return v[d];
	}

	public static void main(String[] args) throws IOException {
		
		for(int i = 0;i < 26;i++){
			for(int j = 0;j < 26;j++){
				am[i][j] = 0;
			}
		}
		
		ArrayList<String> paths = new ArrayList<String>();
		
		while(true){
			String in = br.readLine();
			if(in.equals("**")){
				break;
			}
			paths.add(in);
		}
		int roads = 0;
		for(int i = 0;i < paths.size();i++){
			for(int j = 0;j < paths.size();j++){
				if(j!=i){
					char a = paths.get(j).charAt(0);
					char b = paths.get(j).charAt(1);
					int ai = a - 'A';
					int bi = b - 'A';
					am[ai][bi] = 1;
					am[bi][ai] = 1;
				}
			}
			if(!BFS(0,1)){
				System.out.println(paths.get(i));
				roads++;
			}
			for(int k = 0;k < 26;k++){
				for(int l = 0;l < 26;l++){
					am[k][l] = 0;
				}
			}
		}
		System.out.println("There are "+roads+" disconnecting roads.");

	}

}
