package _03_recursion.problems;

import java.util.Scanner;

public class problem_04 {
	
	public static void main(String[] args) {
		
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter Number");
	int n = sc.nextInt();
			
	pro obj = new pro();
	obj.display(n, n);
	
	
	sc.close();
}
}


//Print 1 to n Times using backtracking
class  pro{

void display(int i, int n) {
	
	if(i<1) return;
	
	display(i-1, n);
	System.out.println(i);
}
}
