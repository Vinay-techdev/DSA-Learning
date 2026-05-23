package _06_arrays.Easy;

public class LargestElement {

	public static void main(String[] args) {
		
		int[] arr = {12, 32, 44, 2, 55, 55, 6};
		
		// Logic for First Largest
		int largest = arr[0];
		for(int i = 0; i<arr.length; i++) {
			
			if(arr[i]>largest) largest = arr[i];
		}
		
		// Logic for second largest
		int secLarg = -1;
		for(int i = 0; i<arr.length; i++) {
			
			if(arr[i]>secLarg && arr[i]!=largest) {
				secLarg = arr[i];
			}
		}
		
		System.out.println("Largest number in Array is "+largest);
		System.out.println("Second Largest number in Array is "+secLarg);
		
		solution.opt(arr, arr.length);

	}

}

class solution{
	
	public static void opt(int[] arr, int n) {
		
		int larg = arr[0];
		int secLarg = -1;
		
		for(int i = 1; i<n; i++) {
			
			if(arr[i]>larg && arr[i]!=larg) {
				
				secLarg = larg;
				larg = arr[i];
			}
		}
		
		System.out.println("Largest and Second Largest are: ");
		System.out.println(larg);
		System.out.println(secLarg);
	}
}
