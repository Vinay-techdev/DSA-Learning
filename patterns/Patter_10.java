package patterns;

public class Patter_10 {

	public static void main(String[] args) {


		/*

Pattern
*
**
***
****
*****
****
***
**
*

		
		*/
		int n = 5;
		
         for(int i = 1; i<=2*n-1; i++) {
			
        	 int star = i;
        	 
        	 if(i>n) {
        		 star = 2*n-i; 
        	 }
        	 // Star
			for(int j = 0; j<star; j++) {
				System.out.print("*");
			}
			
			System.out.println();
		}

	}
}
