import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int a = scanner.nextInt();
    int b = scanner.nextInt();

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float division = (float) a / b; // Cast to float to get the decimal part
    int remainder =
        a % b; // This produces the remainder after dividing 'b' into 'a'. The '%' operator is
    // called the 'modulo' operator

    System.out.println("a + b = " + sum);
    System.out.println("a - b = " + difference);
    System.out.println("a * b = " + product);
    System.out.printf(
        "a / b = %.2f\n", division); // The decimal part is only displayed if the float is 0.xx
    System.out.println("a % b = " + remainder);
  }
}
