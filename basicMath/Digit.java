package basicMath;

public class Digit {

	public static void main(String[] args) {
		
		// Extracting Digit reverse order
		
		int num = 2568;
		
		while(num>0) {
			int lastDigit = num%10;
			System.out.println(lastDigit);
			num = num / 10;
		}
		
		// Number of digit
		int count = 0;
		long n = 654895689;
		long number = n;
		
		while(n>0) {
			count ++;
			n= n/10;
		}
		
		System.out.println("Total Digit of Number " +number+": "+count);

	}

}
