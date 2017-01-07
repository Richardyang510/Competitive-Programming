import java.util.*;

public class ccc14s1 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int i;
		int nextArrayNum = 0;

		int numFriends = input.nextInt();
		int numRounds = input.nextInt();

		int[][] arr = new int[numRounds + 1][numFriends];
		for (int z = 0; z < numFriends; z++) {
			arr[0][z] = z + 1;
		}

		for (i = 0; i < numRounds; i++) {
			nextArrayNum = 0;
			int nextMultiple = input.nextInt();
			for (int j = 0; j < numFriends; j++) {

				if (arr[i][j] == 0) {
					break;
				}

				if ((j + 1) % nextMultiple != 0) {
					arr[i + 1][nextArrayNum] = arr[i][j];
					nextArrayNum++;
				}
			}
		}

		for (int k = 0; k < numFriends; k++) {
			if (arr[i][k] == 0) {
				break;
			}
			System.out.println(arr[i][k]);
		}
	}
}
