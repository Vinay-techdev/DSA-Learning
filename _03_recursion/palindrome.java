package _03_recursion;

public class palindrome {

	public static void main(String[] args) {
		
			String s = "mam";
			int n = s.length();
			
			if(palind(s, n, 0)) {
				System.out.println("Palindrom");
			}else {
				System.out.println("Not Palindrom");
			}
			
	}		
		static boolean palind(String s, int n, int i) {
			
				if(i>n/2) return true;
				
				if(s.charAt(i) != s.charAt(n - i - 1)) return false;
				
				return palind(s, n, i+1);
			
		}

	}
