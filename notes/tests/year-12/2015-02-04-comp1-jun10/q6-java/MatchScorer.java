package question6;

import java.util.Scanner;

public class MatchScorer {
	public static void main(String[] args) {
		int PlayerOneScore = 0;
		int PlayerTwoScore = 0;
		System.out.println("How many games?");
		int NoOfGamesInMatch = new Scanner(System.in).nextInt();
		for (int NoOfGamesPlayed = 0; NoOfGamesPlayed < NoOfGamesInMatch; NoOfGamesPlayed++) {
			System.out.println("Did Player One win the game (enter Y or N)?");
			String PlayerOneWinsGame = new Scanner(System.in).next();
			if (PlayerOneWinsGame.equals("Y")) {
				PlayerOneScore += 1;
			} else {
				PlayerTwoScore += 1;
			}
		}
		System.out.println(PlayerOneScore);
		System.out.println(PlayerTwoScore);
	}

}
