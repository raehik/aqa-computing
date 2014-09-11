package calculator;

import java.util.Scanner;

public class Calculator {
	public String getInput() {
		Scanner scanner = new Scanner(System.in);
		return scanner.next();
	}
	
	public double getDouble() {
		String numString;
		double parsedNum;
		numString = this.getInput();
		parsedNum = Double.parseDouble(numString);
		return parsedNum;
	}
	
	public int getInt() {
		String numString;
		int parsedNum;
		numString = this.getInput();
		parsedNum = Integer.parseInt(numString);
		return parsedNum;
	}

	public void printOperators() {
		System.out.println("Operators:");
		System.out.println("    +    - add");
		System.out.println("    -    - subtract");
		System.out.println("    *    - multiply");
		System.out.println("    /    - divide");
		System.out.println("    ^    - power of");
	}
	
	public int add(int num1, int num2) {
		return num1 + num2;
	}
	
	public int subtract(int num1, int num2) {
		return num1 - num2;
	}

	public int multiply(int num1, int num2) {
		return num1 * num2;
	}

	public double divide(double num1, double num2) {
		return num1 / num2;
	}

	public double powerOf(double num1, double num2) {
		return Math.pow(num1, num2);
	}
}
