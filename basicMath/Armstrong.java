package basicMath;

import java.util.Scanner;

public class Armstrong {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Number to check palindrome or not");
		int num = sc.nextInt();
	
		
		int number = num;
		int sum = 0;
		while(num>0){
			int lastdigit = num%10;
			sum = sum + (lastdigit*lastdigit*lastdigit);
			num = num/10;
		}
		
		if (number == sum) {
			System.out.println("Number is Armstrong");
		} else {
			System.out.println("Number is not Armstrong");
		}
		sc.close();

	}

}
