import java.util.*;

public class Main {
  public static void main(String[] args) {
    int a, b;
    if (args.length < 2) System.exit(1);
    for (int i = 0; i < args.length; ++i) {
      try {
        a = Integer.parseInt(args[--args.length]);
        break;
      } catch (NumberFormatException e) {
      }
    }
    if (a == 0) System.exit(2);
    for (int i = 0; i < args.length; ++i) {
      try {
        b = Integer.parseInt(args[--args.length]);
        break;
      } catch (NumberFormatException e) {
      }
    }
    if (b == 0) System.exit(3);
    System.out.printf("a+b  =  %d%n", a + b);
    System.out.printf("a-b  =  %d%n", a - b);
    System.out.printf("a*b  =  %d%n", a * b);
    System.out.printf("a/b  =  %d%n", a / b); // truncates towards 0  (in Java 8)
    System.out.printf("a%%b  =  %d%n", a % b); // same sign as first operand  (in Java 8)
  }
}
