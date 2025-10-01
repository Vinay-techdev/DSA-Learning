package _01_patterns;

import java.lang.Math;
public class Pattern_22 {

	public static void main(String[] args) {
		
		/*

Pattern
4444444
4333334
4322234
4321234
4322234
4333334
4444444
		
		*/
		
		int n = 4;
		for(int i = 0; i<2*n-1; i++) {
			
			for(int j = 0; j<2*n-1; j++) {
				
				int top = i;
				int left = j;
				int right = (2*n -2) - j;
				int down = (2*n - 2) - i;
				System.out.print(n-Math.min(Math.min(top, down), Math.min(left, right)));
			}
			

           System.out.println();
		}

	}

}
