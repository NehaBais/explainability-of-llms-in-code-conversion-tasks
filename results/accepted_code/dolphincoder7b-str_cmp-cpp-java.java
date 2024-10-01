
public class Main {

  public static void main(String[] args) {
    String a = (args.length > 0) ? args[0] : "1.2.Foo";
    String b = (args.length > 1) ? args[1] : "1.3.Bar";

    // Case-sensitive comparisons
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case
    demo_compare(a.toLowerCase(), b.toLowerCase(), "lexically");

    // Numeric comparisons; here 'double' could be any type for which the relevant >> operator is
    // defined, eg int, long, etc.
    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);
    demo_compare(numA, numB, "numerically");
  }

  static <T extends Comparable<T>> void demo_compare(final T a, final T b, String semantically) {
    System.out.printf(
        "%s and %s are %s exactly %s equal.%n",
        a, b, (a.compareTo(b) == 0) ? "" : "not ", semantically);
    System.out.printf("%s and %s are %s inequal.%n", a, b, (a.compareTo(b) != 0) ? "" : "not ");

    System.out.printf("%s is %s ordered before %s.%n", a, (a.compareTo(b) < 0) ? "" : "not ", b);
    System.out.printf("%s is %s ordered after %s.%n", a, (a.compareTo(b) > 0) ? "" : "not ", b);
  }
}
