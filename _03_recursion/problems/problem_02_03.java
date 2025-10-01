package _03_recursion.problems;

import java.util.Scanner;

public class problem_02_03 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number");
		int n1 = sc.nextInt();
				
		prob1 obj1 = new prob1();
		obj1.display(1, n1);
		System.out.println();
		
		System.out.println("Enter Number for reverse order");
		int n2 = sc.nextInt();
		
		prob2 obj2 = new prob2();
		obj2.display(n2);
		
		sc.close();

	}

}

//Print Linearly from 1 to N Times using recursion
class prob1{
	
	void display(int i, int n) {
		
		if(i>n) return;
		
		System.out.println(i);
		display(i+1, n);
	}
}

//Print from N to 1 Times using backtracking
class prob2{
	
	void display(int n) {
		
		if(n==0) return;
		
		System.out.println(n);
		display(n-1);
	}
}

