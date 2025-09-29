package patterns;

public class Patter_01 {
	
	public static void main(String[] args) {
		
		/*

		Pattern
		* * * *
		* * * *
		* * * *
		* * * *

		*/
		
		for(int i = 0; i<4; i++) {
			
			for(int j = 0; j<4; j++) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}

/*
 
Tricks to follow

1. For outer loop, count no.of rows or lines     - 4 rows
2. For inner loop, focus on columns and connect them somehow to rows       - print 4 * each col
3. print them "*" inside inner for loop
4. observe symmetry [optional]

*/

