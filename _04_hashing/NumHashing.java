package _04_hashing;

import java.util.*;
public class NumHashing {

	public static void main(String[] args) {

		        Scanner sc = new Scanner(System.in);

		        int n;
		        System.out.println("Enter the size of array:");
		        n = sc.nextInt();
		        System.out.println();
		        
		        int[] arr = new int[n];
		        
		        System.out.println("Enter "+n+" Elements");
		        for (int i = 0; i < n; i++) {
		            arr[i] = sc.nextInt();
		        }

		        //pre-compute:
		        int[] hash = new int[13];
		        
		        for (int i = 0; i < n; i++) {
		            hash[arr[i]] += 1;
		        }

		        int q;
		        System.out.println();
		        System.out.println("Enter the number to check count ");
		        q = sc.nextInt();
		        // fetching:
		        System.out.println("The Count of "+q+": "+hash[q]);
		        sc.close();
		    }
}
