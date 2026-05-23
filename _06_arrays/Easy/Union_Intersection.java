package _06_arrays.Easy;

import java.util.*;

public class Union_Intersection {

	static ArrayList<Integer> FindUnion(int arr1[], int arr2[], int n, int m) {
		
	   int i = 0, j = 0; // pointers
	   
	  ArrayList<Integer > Union=new ArrayList<>();
	  
	  while (i < n && j < m) {
		  
	    if (arr1[i] <= arr2[j]) // Case 1 and 2
	    {
	      if (Union.size() == 0 || Union.get(Union.size()-1) != arr1[i])
	        Union.add(arr1[i]);
	      i++;
	    } 
	    
	    else // case 3
	    {
	      if (Union.size() == 0 || Union.get(Union.size()-1) != arr2[j])
	        Union.add(arr2[j]);
	      j++;
	    }
	  }
	  
	  while (i < n) // if still element left in array 1
	  {
	    if (Union.get(Union.size()-1) != arr1[i])
	      Union.add(arr1[i]);
	    i++;
	  }
	  
	  while (j < m) // if still elements left in array 2
	  {
	    if (Union.get(Union.size()-1) != arr2[j])
	      Union.add(arr2[j]);
	    j++;
	  }
	  
	  return Union;
	}
	
	static ArrayList<Integer> FindIntersection(int arr1[], int arr2[], int n, int m) {
		
		int i = 0;
		int j = 0;
		
		ArrayList<Integer> Interscetion = new ArrayList<>();
		
		while(i<n && j<m) {
			
			if(arr1[i]<arr2[j]) i++;
			
			else if(arr2[j] < arr1[i]) j++;
			
			else {
				Interscetion.add(arr1[i]);
				i++;
				j++;
			}
		}
		
		return Interscetion;
	}
	
	
	public static void main(String args[]) {
		
	  int n = 10, m = 7;
	  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
	  
	  ArrayList<Integer> Union = FindUnion(arr1, arr2, n, m);
	  ArrayList<Integer> Intersection = FindIntersection(arr1, arr2, n, m);
	  
	  System.out.println("Union of array 1 and array 2");
	  for (int val: Union)
	    System.out.print(val+" ");
	  
	  System.out.println();
	  System.out.println();
	  
	  System.out.println("Intersection of array 1 and array 2");
	  for (int val: Intersection)
	    System.out.print(val+" ");
	}

}
