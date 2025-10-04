package _05_sorting;

public class SelectionSort {

	public static void main(String[] args) {
		
		int[] arr = {13, 46, 9, 34, 76};
		
		for(int i =0; i<=arr.length-2; i++) {
			
			int min = i;
			
			for(int j=i; j<=arr.length-1; j++) {
				if(arr[j]<arr[min]) min = j;
			}
			
			//Swap
			int temp = arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
			
		}
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}

	}

}


// Step 01 - Find minimum from array 
// step 02 - Swap both number