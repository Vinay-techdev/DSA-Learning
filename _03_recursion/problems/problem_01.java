package _03_recursion.problems;

import java.util.Scanner;

public class problem_01 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number");
		int n = sc.nextInt();
				
		pro1 obj = new pro1();
		obj.display(1, n);
		
		
		sc.close();
	}

}

//Print Name n Times using recursion
class pro1{
	
	void display(int i, int n) {
		
		if(i>n) return;
		
		System.out.println("Vinay "+i);
		display(i+1, n);
	}
}
