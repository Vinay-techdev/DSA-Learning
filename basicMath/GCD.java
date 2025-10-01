package basicMath;

import java.util.Scanner;

public class GCD {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.println("Enter First Number");
		int m = sc.nextInt();
		
		System.out.println("Enter Second Number");
		int n = sc.nextInt();
		
		
		while(n != 0) {
			
			int rem = m%n;
			m=n;
			n=rem;
		}
		
		System.out.println(m);
		
		sc.close();

	}

}
