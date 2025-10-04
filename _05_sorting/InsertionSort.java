package _05_sorting;

public class InsertionSort {

	public static void main(String[] args) {


		int[] arr = {13, 46, 999, 9, 34, 76, 3, 0};
		int n = arr.length;
		
		for(int i=0; i<=n-1; i++) {
			
			int j = i;
			while(j>0 &&  arr[j-1] > arr[j]) {
				
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
				
				j--;
			}
		}
		
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}

	}

}
