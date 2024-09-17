import java.util.Scanner; // Import Scanner class for reading user inputs

public class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); // Create a Scanner object to read inputs

    System.out.println("Enter two integers:"); // Prompt the user for input

    int a, b;
    if (scan.hasNextInt()) { // Check if the next token is an integer
      a = scan.nextInt(); // Reads the next integer from the input and assign it to 'a'
    } else {
      System.err.println("Invalid Input"); // Error message in case of invalid integer input
      return; // Terminate the program
    }

    if (scan.hasNextInt()) // Check again for an integer
    b = scan.nextInt(); // Assigns next integer to 'b'
    else {
      System.err.println("Invalid Input");
      return; // Terminate the program in case of invalid input
    }

    // test for less-than
    if (a < b) System.out.println(a + " is less than " + b);

    // test for equality
    if (a == b) System.out.println(a + " is equal to " + b);

    // test for greater-than
    if (a > b) System.out.println(a + " is greater than " + b);
  }
}
