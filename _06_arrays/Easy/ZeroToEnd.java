package _06_arrays.Easy;

public class ZeroToEnd {

	public static void main(String[] args) {
		
		int[] arr1 = {1,2, 3,0, 0, 2, 0, 4, 5, 0,7};
		solution3.zeroEnd(arr1, arr1.length);
		
		System.out.println();
		int[] arr2 = {1,2, 3,0, 0, 2, 0, 4};
		solution3.optimal(arr2, arr2.length);
		

	}

}

class solution3{
	
	public static void zeroEnd(int[] arr, int n) {
		
		int[] temp = new int[n];
		int j =0;
		
		for(int i =0; i<n; i++) {
			
			if(arr[i] != 0) {
				temp[j] = arr[i];
				j++;
			}
			
		}
		
		for(int i = 0; i<temp.length; i++) {
			arr[i] = temp[i];
		}
				
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
	
	public static void optimal(int[] arr, int n) {
		
		int j = -1;
		
		for(int i =0; i<n; i++) {
			if(arr[i] == 0) {
				j=i;
				break;
			}
		}
				
		if(j==-1) return;
		
		for(int i = j; i<n; i++) {
			
			if(arr[i] != 0) {
				
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				j++;
			}
		}
		
		System.out.println("Optimal solution");
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
}
