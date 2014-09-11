package calculator;

public class ButtonPresser {

	public static void main(String[] args) {
		Calculator calc = new Calculator();
		System.out.println("Number 1: ");
		String num1 = calc.getInput();
		System.out.println("Number 2: ");
		String num2 = calc.getInput();
		int num1Int = Integer.parseInt(num1);
		int num2Int = Integer.parseInt(num2);
		double num1Double = Double.parseDouble(num1);
		double num2Double = Double.parseDouble(num2);
		int resultAdd = calc.add(num1Int, num2Int);
		int resultSubtract = calc.subtract(num1Int, num2Int);
		int resultMultiply = calc.multiply(num1Int, num2Int);
		double resultDivide = calc.divide(num1Double, num2Double);
		double resultPowerOf = calc.powerOf(num1Double, num2Double);
		System.out.println(num1 + " + " + num2 + " = " + resultAdd);
		System.out.println(num1 + " - " + num2 + " = " + resultSubtract);
		System.out.println(num1 + " * " + num2 + " = " + resultMultiply);
		System.out.println(num1 + " / " + num2 + " = " + resultDivide);
		System.out.println(num1 + " ** " + num2 + " = " + resultPowerOf);
	}
}
