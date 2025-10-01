package _01_patterns;

public class Patter_18 {

	public static void main(String[] args) {


		/*

Pattern
E
DE
CDE
BCDE
ABCDE
		
		*/
		
		int n = 5;
        for(int i = 0; i<n; i++) {
			 
        for(char ch =(char) ('E'-i); ch<='E'; ch++) {
			System.out.print(ch);
		}
        System.out.println();
      }

	}
}
