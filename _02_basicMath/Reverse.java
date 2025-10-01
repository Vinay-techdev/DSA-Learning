package _02_basicMath;

public class Reverse {

	public static void main(String[] args) {
		
		/*
		 
		  1. If input- 1234 || Output should be - 4321
		  2. If input- 742100 || Output should be - 1247
		 
		 */
		
       int num = 401100;
       int rev = 0;
		
		while(num>0) {
			int lastDigit = num%10;
			num = num / 10;
			rev = rev *10+lastDigit;
		}
		System.out.println(rev);
	}

}
