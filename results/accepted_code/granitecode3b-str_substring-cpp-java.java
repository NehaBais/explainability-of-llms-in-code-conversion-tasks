import java.util.Scanner;

public class SubstringExample {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    // Get user input for string, starting index, and length of substring
    System.out.print("Enter a string: ");
    String str = input.nextLine();
    System.out.print("Enter the starting index: ");
    int start = input.nextInt();
    System.out.print("Enter the length of the substring: ");
    int length = input.nextInt();

    // Display the substring
    System.out.println(str.substring(start, start + length));
  }
}
