package _03_recursion;

public class AwapArray {

	public static void main(String[] args) {
		
		int[] arr = {4, 9, 3, 7, 1};
		int n = arr.length;
		
		swaping(arr, n, 0);
		
		for(int i = 0; i<n; i++) {
			System.out.println(arr[i]);
		}

	}
	
	static void swaping(int arr[], int n, int i) {
		
			
			if(i>n/2) return;
			
			int temp = arr[i];
			arr[i] = arr[n-i-1];
			arr[n-i-1] = temp;
			
			swaping(arr, n, i+1);
			
		
	}

}
