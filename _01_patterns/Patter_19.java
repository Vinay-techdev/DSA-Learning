package _01_patterns;

public class Patter_19 {

	public static void main(String[] args) {


		/*

Pattern
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

		
		*/
		
		 int n = 5;
         for(int i = 1; i<=n; i++) {
			
        	 // Stars
        	 for(int j = 1; j<=n+1-i; j++) {
        		 System.out.print("*");
        	 }
        	 
        	 // space
        	 for(int j = 1; j<=(i-1)*2; j++) {
        		 System.out.print(" ");
        	 }
        	 
        	 // Star
        	 for(int j = 1; j<=n+1-i; j++) {
        		 System.out.print("*");
        	 }
        	 
			System.out.println();
		}
         
         // Reverse order
         int space = 2*(n-1);
         for(int i = 1; i<=n; i++) {
 			
        	 // Stars
        	 for(int j = 1; j<=i; j++) {
        		 System.out.print("*");
        	 }
        	 
        	 //Spaces
        	 for(int j = 1; j<=space; j++) {
        		 System.out.print(" ");
        	 }
        	 
        	 // Star
        	 for(int j = 1; j<=i; j++) {
        		 System.out.print("*");
        	 }
        	 
			System.out.println();
			space -=2;
		}
	}

}
