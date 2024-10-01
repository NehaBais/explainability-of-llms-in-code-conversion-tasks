import java.util.Locale;

public class Main {

  public static void main(String[] args) {
    // Case-sensitive comparisons.
    String a = (args.length > 0) ? args[0] : "1.2.Foo";
    String b = (args.length > 1) ? args[1] : "1.3.Bar";
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase(Locale.getDefault());
    b = b.toLowerCase(Locale.getDefault());
    demo_compare(a, b, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    Double numA, numB;
    try {
      numA = Double.parseDouble(a);
      numB = Double.parseDouble(b);
      demo_compare(numA, numB, "numerically");
    } catch (NumberFormatException e) {
      System.out.println("Cannot parse strings as numbers.");
    }
  }

  public static void demo_compare(Object a, Object b, String semantically) {
    if (!(a instanceof Comparable)) {
      throw new IllegalArgumentException("Objects must implement Comparable interface.");
    }

    boolean isEqual = ((Comparable) a).compareTo(b) == 0;
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + (isEqual ? "" : "not ")
            + "exactly "
            + semantically
            + " equal.");

    boolean isNotEqual = !isEqual;
    System.out.println(
        a + " and " + b + " are " + (isNotEqual ? "" : "not ") + semantically + " inequal.");

    boolean isOrderedBefore = ((Comparable) a).compareTo(b) < 0;
    System.out.println(
        a + " is " + (isOrderedBefore ? "" : "not ") + semantically + " ordered before " + b + '.');

    boolean isOrderedAfter = !isOrderedBefore && isEqual == false;
    System.out.println(
        a + " is " + (isOrderedAfter ? "" : "not ") + semantically + " ordered after " + b + '.');
  }
}
