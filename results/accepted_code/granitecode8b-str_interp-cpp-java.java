import java.util.Scanner;

public class StringInterpolation {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the original string: ");
    String original = scanner.nextLine();
    System.out.print("Enter the character sequence to be replaced: ");
    String toBeReplaced = scanner.next();
    System.out.print("Enter the value to replace the character sequence with: ");
    String replacement = scanner.next();

    String newString = original.replace(toBeReplaced, replacement);
    System.out.println("String after replacement: " + newString);
  }
}
