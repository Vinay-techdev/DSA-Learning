package _02_basicMath;

import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {


		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Number to check palindrome or not");
		int num = sc.nextInt();
		
		int number = num;
		
		int rev = 0;
		
		while(num>0) {
			int lastDigit = num%10;
			num = num / 10;
			rev = rev *10+lastDigit;
		}
		
		if(number == rev) {
			System.out.println("Number is palindrome");
		}else {
			System.out.println("Number is not palindrome");
		}
		
		sc.close();
	}

}
