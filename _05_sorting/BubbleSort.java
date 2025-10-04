package _05_sorting;

public class BubbleSort {

	public static void main(String[] args) {
		
		//int[] arr = {1,2,3,4,5,6};
		int[] arr = {13, 46, 999, 9, 34, 76, 3, 0};
		int n = arr.length;
		
		for(int i=n-1; i>=0;i--) {
			
			int isSwap = 0;
			for(int j=0; j<=i-1; j++) {
				
				if(arr[j]>arr[j+1]) {
					
					int temp = arr[j+1];
					arr[j+1]=arr[j];
					arr[j] = temp;
					isSwap +=1;
				}
			}
			
			// Optimizing code - return if no more value to swap and already array swapped means sorted
			if(isSwap == 0) {
				break;
			}
			
			System.out.println("Code Runs"); // Run and then change array to 1,2,3,4 to check how many times loop runs
		}
		
		for(int i = 0; i<n; i++) {
			System.out.println(arr[i]);
		}

	}

}
