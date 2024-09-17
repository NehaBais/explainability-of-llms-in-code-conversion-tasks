import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int a, b;
    if (args.length < 2) exit(1);
    b = Integer.parseInt(args[--argc]);
    if (b == 0) exit(2);
    a = Integer.parseInt(args[--argc]);
    System.out.println("a+b = " + (a + b));
    System.out.println("a-b = " + (a - b));
    System.out.println("a*b = " + (a * b));
    System.out.println("a/b = " + (a / b)); // truncates towards 0 (in C99)
    System.out.println("a%b = " + (a % b)); // same sign as first operand (in C99)
  }
}
