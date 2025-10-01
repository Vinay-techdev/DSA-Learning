package _01_patterns;

public class Patter_12 {

	public static void main(String[] args) {


		/*

Pattern
1      1
12    21
123  321
12344321
		
		*/
		
		int n = 5;
		
		int space = 2*(n-2);
         for(int i = 1; i<=n-1; i++) {
			
        	 // Numbers
			for(int j = 1; j<=i; j++) {
				System.out.print(j);
			}
			
			// Spaces
			for(int j=1; j<=space; j++) {
				System.out.print(" ");
			}
			
			// Numbers
			for(int j = i; j>=1; j--) {
				System.out.print(j);
			}
			
			
			System.out.println();
			space -=2;
		}

	}
}
