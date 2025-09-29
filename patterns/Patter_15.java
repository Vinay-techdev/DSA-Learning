package patterns;

public class Patter_15 {

	public static void main(String[] args) {


		/*

Pattern
ABCDE
ABCD
ABC
AB
A		
		*/
		
		int n = 5;
		
         for(int i = 0; i<n; i++) {
			
			for(char ch = 'A'; ch<'A' + (n-i); ch++) {
				System.out.print(ch);
			}
			System.out.println();
		}
	}
}
