import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
        
    System.out.println("Enter two integers separated by a space:");
    int input1 = scanner.nextInt();
    int input2 = scanner.nextInt();

    if (input1 < input2) {
      System.out.println("The first integer (" + input1 + ") is less than the second integer (" + input2 + "))."));
    } else if (input1 == input2)) {
      System.out.println("The first integer (" + input1 + ") equals the second integer (" + input2 + "))."));
    } else if (input1 > input2)) {
      System.out.println("The first integer (" + input1 + ") is greater than the second integer (" + input2 + "))."));
    }

    scanner.close();
  }
}