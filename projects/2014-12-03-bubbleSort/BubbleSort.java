package bubbleSort;

import java.util.Arrays;

public class BubbleSort {
	public static int[] sort(int[] array, int offset) {
		int[] working_array = Arrays.copyOf(array, array.length);
		for (int i = 0; i < working_array.length - 1 - offset; i++) {
			if (working_array[i] > working_array[i+1]) {
				// swap elements -- thx for the ugly, Java
				int tmp = working_array[i];
				working_array[i] = working_array[i+1];
				working_array[i+1] = tmp;
			}
		}
		
		if (Arrays.equals(array, working_array)) {
			return working_array;
		}
		else {
			return sort(working_array, offset + 1);
		}
	}
	
	public static int[] sort(int[] array) {
		return BubbleSort.sort(array, 0);
	}
	
	public static void main(String args[]) {
		int[] array = {5, 4, 3, 2, 1};
		int[] sorted_array = BubbleSort.sort(array);
		System.out.println(Arrays.toString(array));
		
		long startTime = System.nanoTime();
		System.out.println(Arrays.toString(sorted_array));
		long endTime = System.nanoTime();

		long ns = (endTime - startTime);// / 1000000;
		
		System.out.println("Execution time: " + ns + "ns");
	}
}
