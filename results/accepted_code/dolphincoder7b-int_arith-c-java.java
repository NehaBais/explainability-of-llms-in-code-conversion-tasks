import java.util.*;

public class Main {
  public static void main(String[] args) {
    int a, b;
    if (args.length < 2) System.exit(1);
    b = Integer.parseInt(args[--args.length]);
    if (b == 0) System.exit(2);
    a = Integer.parseInt(args[--args.length]);
    System.out.printf("a+b = %d%n", a + b);
    System.out.printf("a-b = %d%n", a - b);
    System.out.printf("a*b = %d%n", a * b);
    System.out.printf("a/b = %d%n", a / b); // truncates towards 0 (in Java 8)
    System.out.printf("a%%b = %d%n", a % b); // same sign as first operand (in Java 8)
  }
}
