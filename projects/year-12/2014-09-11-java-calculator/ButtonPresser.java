package calculator;

public class ButtonPresser {

	public static void main(String[] args) {
		String result = null;
		Calculator calc = new Calculator();
		calc.printOperators();
		
		System.out.println("Number 1: ");
		String num1 = calc.getInput();
		System.out.println("Number 2: ");
		String num2 = calc.getInput();
		
		System.out.println("Operator: ");
		char operator = calc.getInput().charAt(0);

		int num1Int = Integer.parseInt(num1);
		int num2Int = Integer.parseInt(num2);
		double num1Double = Double.parseDouble(num1);
		double num2Double = Double.parseDouble(num2);
		
		switch (operator) {
		case '+': {
			result = Integer.toString(calc.add(num1Int, num2Int));
			break;
		}
		case '-': {
			result = Integer.toString(calc.subtract(num1Int, num2Int));
			break;
		}
		case '*': {
			result = Integer.toString(calc.multiply(num1Int, num2Int));
			break;
		}
		case '/': {
			result = Double.toString(calc.divide(num1Double, num2Double));
			break;
		}
		case '^': {
			result = Double.toString(calc.powerOf(num1Double, num2Double));
			break;
		}
		}
		
		System.out.println(num1 + " " + operator + " " + num2 + " = " + result);
	}
}
