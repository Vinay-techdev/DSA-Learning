package patterns;

public class Pattern_21 {

	public static void main(String[] args) {

		/*

Pattern
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

		
		*/	

		int n = 5;
		for(int i = 0; i<n; i++) {
			
       	   // stars
			for(int j = 0; j<n; j++) {
				
				if (i == 0 || j==0 || i==n-1 || j==n-1) {
					System.out.print("*");
				}else {
					System.out.print(" ");
				}
				System.out.print(" ");
			}
			
           System.out.println();
		}
	}

}
