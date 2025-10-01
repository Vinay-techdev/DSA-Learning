package _03_recursion;

public class Recursion {

	public static void main(String[] args) {
		
		display();	

	}

	static int count = 0;
	
	 static void display() {
		if(count == 3) return;
		System.out.println(count);
		count++;
		display();
	}
}
