import java.util.Scanner;

public class StringInterpolation {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter the original string: ");
    String original = scanner.nextLine();

    System.out.print("Enter the value to be replaced (e.g., 'X'): ");
    String toBeReplaced = scanner.next();

    System.out.print("Enter the replacement value (e.g., 'little'): ");
    String replacement = scanner.next();

    String newString = original.replace(toBeReplaced, replacement);

    System.out.println("New string after interpolation: " + newString);
  }
}
