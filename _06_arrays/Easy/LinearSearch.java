package _06_arrays.Easy;

public class LinearSearch {
	
	public static boolean linearSearch(int[] arr, int num) {
       for(int i = 0; i<arr.length; i++) {
			
			if(arr[i] == num) return true;
		}
       
       return false;
	}

	public static void main(String[] args) {
		
		int[] arr = {1, 2, 3,4 ,5 ,6, 2, 0};
		int  num = 1;
		
				
		if(linearSearch(arr, num)) {
			System.out.println("Number Found in array");
		}else {
			System.out.println("Number not Found in array");
		}

}
}
