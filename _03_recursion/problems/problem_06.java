package _03_recursion.problems;

public class problem_06 {

	public static void main(String[] args) {
		
		int n =7;
		System.out.println(("Sum of number "+n+": "+fact(n)));

	}
	
	static int fact(int n) {
		
		if(n==0) return 1;
		if(n==1) return 1;
		
		return n * fact(n-1);
	}

}
