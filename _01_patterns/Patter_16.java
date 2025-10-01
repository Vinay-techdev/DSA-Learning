package _01_patterns;

public class Patter_16 {

	public static void main(String[] args) {


		/*

Pattern
A
BB
CCC
DDDD
EEEEE
		
		*/
		
		int n = 5;
		
		char chara = 'A';
         for(int i = 1; i<=n; i++) {
			
			for(char ch = chara; ch<chara + i; ch++) {
				System.out.print(chara);
			}
			System.out.println();
			chara ++;
		}

	}
}
