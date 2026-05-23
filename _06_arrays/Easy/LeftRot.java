package _06_arrays.Easy;
import java.util.Random;


public class LeftRot {

	public static void main(String[] args) {

		int[] arr1 = {1, 3, 2, 4, 5};
		int[] arr2 = {1, 3, 2, 4, 5, 7, 8};
		int[] arr3 = {1, 3, 2, 4, 5, 7, 8};
		
		Random random = new Random();
        int d = random.nextInt(20) + 1; // Generates a number from 0 to 19, then adds 1 to make it 1 to 20
        
        
		solution.leftRot1(arr1, arr1.length);
		
		System.out.println("Rotating array by "+d);
		solution.leftRotD(arr2, arr2.length, d);
		
		System.out.println();
		
		System.out.println("Rotating array by "+d+" using optimal solution");
		solution.optimalSolution(arr3, arr3.length, d);
		
	}

}

class solution{
	
	public static void leftRot1(int[] arr, int n) {
		
		int temp = arr[0];
		
		// Logic left round array by one place
		for(int i = 0; i<n - 1; i++) {
					
			arr[i] = arr[i+1];
		}
		arr[n-1] = temp;
				
				
		System.out.println("Rotating array by 1");
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}
		
		System.out.println();
	}
	
	public static void leftRotD(int[] arr, int n, int num) {
		
		int d = num%n;
		
		
		// Storing first d element in temp
		int[] temp = new int[d];
		
		for(int i =0; i<d; i++) {
			temp[i] = arr[i];
		}
		
		// Logic left rotate array by D places
		for(int i = 0; i<n - d; i++) {
					
			arr[i] = arr[d+i];
		}
		
		// Logic to store temp array back to original array
		for(int i = 0; i<d; i++) {
			arr[n-d+i] = temp[i];
		}
		
		
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
	
	public static void optimalSolution(int[] arr, int n, int num) {
		
		int d = num%n;
		
		reverse(arr, 0, d-1); // Reverse 0 - d elements
		reverse(arr, d, n-1); // Reverse d - n-1 elements
		reverse(arr, 0, n-1); // Last reverse whole elements to get solution
		
		for(int i = 0; i<arr.length; i++) {
			System.out.println(arr[i]);
		}
	}
	
	public static void reverse(int[] arr, int start, int end) {
		
		while (start <= end) {
		      int temp = arr[start];
		      arr[start] = arr[end];
		      arr[end] = temp;
		      start++;
		      end--;
		  }
	}
}


//? C++ Code 

//* left rotate by 1 */

// class Solution {
// public:
//     void rotateArrayByOne(vector<int>& nums) {

//         int n = nums.size();
//         int temp = nums[0];

//         for(int i = 1; i < n; i++){
//             nums[i-1] = nums[i];
//         }

//         nums[n-1] = temp;
//     }
// };

//* left rotate by k 

// class Solution {
// public:
//     void rotateArray(vector<int>& nums, int k) {
//         int temp[k];
//         int n = nums.size();
//         k = k % n;

//         for(int i = 0; i < k; i++){
//             temp[i] = nums[i];
//         }

//         for(int i = 0; i < n-k; i++ ){
//             nums[i] = nums[k+i];
//         }

//         for(int j = 0; j < k ; j++){
//             nums[n-k+j] = temp[j];
//         }
//     }
// };

//* opt left rotate by k

// class Solution {
// public:
//     void rotateArray(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k%n;
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k, nums.end());
//         reverse(nums.begin(), nums.end());
//     }
// };