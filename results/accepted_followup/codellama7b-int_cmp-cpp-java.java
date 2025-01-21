import java.util.*;

public class CodeConversion {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = 0, b = 0;
    System.out.print("Enter two integers: ");
    while (sc.hasNextInt()) {
      a = sc.nextInt();
      b = sc.nextInt();
      break;
    }

    // test for less-than
    if (a < b) {
      System.out.println(a + " is less than " + b);
    }

    // test for equality
    else if (a == b) {
      System.out.println(a + " is equal to " + b);
    }

    // test for greater-than
    else {
      System.out.println(a + " is greater than " + b);
    }
  }
}
