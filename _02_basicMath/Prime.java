package _02_basicMath;

import java.util.Scanner;

public class Prime {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Number to check Prime or not");
		int num = sc.nextInt();
		
		int count = 0;
		for(int i = 1; i*i<num; i++) {
			if(num%i == 0) {
				count++;
				
				if ((num/i) != i) count++;
			}
		}
		if(count == 2) {
			System.out.println("Number is Prime");
		}else {
			System.out.println("Number is not Prime");
		}
		sc.close();

	}

}
