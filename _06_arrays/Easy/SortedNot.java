package _06_arrays.Easy;

public class SortedNot {

	public static void main(String[] args) {
		
		int[] arr = {10, 1, 22, 32, 44, 55};
		boolean isSorted = solution2.sortedOrNot(arr, arr.length);
		
		if(isSorted) {
			
			System.out.println("Array is Sorted");
		}else {
			System.out.println("Array is not Sorted");
		}

	}

}

class solution2{
	
	public static boolean sortedOrNot(int[] arr, int n) {
		
		for(int i = 1; i<n; i++) {
			
			if(arr[i]>= arr[i-1]) {
				
			}else {
				return false;
			}
		}
		return true;
	}
}
