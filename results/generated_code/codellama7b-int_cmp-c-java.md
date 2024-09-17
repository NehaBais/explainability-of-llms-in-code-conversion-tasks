```
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// Create a Scanner object to read input from the user
		Scanner sc = new Scanner(System.in);

		int a, b; // Declare two integer variables

		// Ask the user to enter the values for a and b
		System.out.print("Enter value of a: ");
		a = sc.nextInt();

		System.out.print("Enter value of b: ");
		b = sc.nextInt();

		// Compare the two values and print the appropriate message
		if (a < b) {
			System.out.println(a + " is less than " + b);
		} else if (a == b) {
			System.out.println(a + " is equal to " + b);
		} else {
			System.out.println(a + " is greater than " + b);
		}
	}
}
```
