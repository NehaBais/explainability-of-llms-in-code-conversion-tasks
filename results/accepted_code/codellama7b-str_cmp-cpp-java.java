import java.util.*;

public class Main {
  public static void main(String[] args) {
    String a = (args.length > 1) ? args[1] : "1.2.Foo";
    String b = (args.length > 2) ? args[2] : "1.3.Bar";
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase();
    b = b.toLowerCase();
    demo_compare(a, b, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);
    demo_compare(numA, numB, "numerically");
  }

  public static <T> void demo_compare(T a, T b, String semantically) {
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + ((a == b) ? "" : "not ")
            + "exactly "
            + semantically
            + " equal.");

    System.out.println(
        a + " and " + b + " are " + ((a != b) ? "" : "not ") + semantically + "inequal.");

    System.out.println(
        a + " is " + ((a < b) ? "" : "not ") + semantically + " ordered before " + b + '.');

    System.out.println(
        a + " is " + ((a > b) ? "" : "not ") + semantically + " ordered after " + b + '.' + "\n");
  }
}
