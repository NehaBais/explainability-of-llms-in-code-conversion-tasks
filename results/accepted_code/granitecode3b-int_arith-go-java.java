import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();
    System.out.println(a + " + " + b + " = " + (a + b));
    System.out.println(a + " - " + b + " = " + (a - b));
    System.out.println(a + " * " + b + " = " + (a * b));
    System.out.println(a + " / " + b + " = " + (int) Math.floor((double) a / b));
    System.out.println(a + " %% " + b + " = " + (a % b));
  }
}
