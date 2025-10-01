package _03_recursion.problems;

public class problem_05 {

	public static void main(String[] args) {
		int n1 = 10;
		sum1(n1, 0);
		
		int n2 = 15;
		System.out.println(("Sum of number "+n2+": "+sum2(n2)));

	}

//? Sum of Numbers
	
	// Parameterized 
	static void sum1(int n, int sum) {
		
		if(n<1) {
			System.out.println("Sum of number: "+sum);
			return;
		}
		
		sum1(n-1,sum+n);
	}
	
	// Functional Recursion
	static int sum2(int n) {
		
		if(n == 0) return 0;
		
		return n + sum2(n-1);
	}
}
