package _01_patterns;

public class Patter_14 {

	public static void main(String[] args) {


		/*

Pattern
A
AB
ABC
ABCD
ABCDE
		
		*/
		
		int n = 5;
         for(int i = 0; i<n; i++) {
 			
			for(char ch = 'A'; ch<='A' + i; ch++) {
				System.out.print(ch);	
			}
			System.out.println();
		}

	}
}
