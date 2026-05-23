package _06_arrays.Easy;

public class MissingNo {

	public static void main(String[] args) {
		int[] arr = {2,3,1,5,8};
		int n = arr.length;
		
		solu.missingElements(n, arr);
		solu.hashingMethod(n, arr);
		
		int ans = solu.XORmissingNumber(arr, n);
        System.out.println("The First Missing number using XOR : " + ans);
	}

}

class solu{
	
	public static void missingElements(int n, int[] arr) {
		
		int max = arr[0];
        for (int num : arr) {
            if (num > max) max = num;
        }
        
        System.out.println("Missing values in array ");
		
		for(int i = 1; i<max; i++) {
			
			int flag =0;
			for(int j = 0; j<n-1; j++) {
				
				if(arr[j]==i) flag = 1;
			}
			
			if(flag==0) {
				System.out.println(i);
			}
		}
	}
	
	public static void hashingMethod(int n, int[] arr) {
		
		int max = arr[0];
        for (int num : arr) {
            if (num > max) max = num;
        }

		int hash[] = new int[max+1]; 

		        
		for (int i = 0; i < n; i++) hash[arr[i]]++;

	    System.out.println("Missing values using hashing");
		        
		for (int i = 1; i <= max; i++) {
		    if (hash[i] == 0) {
		       System.out.println(i);
		    }
		}
	}
	
    public static int XORmissingNumber(int[] arr, int n) {

        int xor1 = 0, xor2 = 0;

        for (int i = 0; i < n - 1; i++) {
        	
            xor2 = xor2 ^ arr[i]; // XOR of array elements
            xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
        }
        
        xor1 = xor1 ^ n; 

        return (xor1 ^ xor2); // the missing number
    }

}