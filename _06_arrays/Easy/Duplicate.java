package _06_arrays.Easy;

public class Duplicate {

	public static void main(String[] args) {
		
		int[] arr = {10, 10, 22, 22, 44, 44, 2, 4};
		
		int j = 0;
		for(int i = 0; i<arr.length;i++) {
		   
			if(arr[j] !=arr[i]) {
				arr[j+1] = arr[i];
				j++;
			}
		}
		
		System.out.println("Length of array after removing duplicate: "+ind);
	}

}
