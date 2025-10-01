package _01_patterns;

public class patter_02 {

	public static void main(String[] args) {
		
		/*

		Pattern
		* 
		* * 
		* * * 
		* * * *
		* * * * *

		*/
		
         for(int i = 0; i<5; i++) {
			
			for(int j = 0; j<=i; j++) {
				System.out.print("* ");
			}
			System.out.println();
		}


	}

}
