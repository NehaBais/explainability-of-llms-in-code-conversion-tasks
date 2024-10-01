import java.util.Locale;

public class StringComparisonDemo {
  public static void main(String[] args) {
    // Case-sensitive comparisons.
    String a = (args.length > 1) ? args[1] : "1.2.Foo";
    String b = (args.length > 2) ? args[2] : "1.3.Bar";
    compareStrings(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    String aLowercase = a.toLowerCase(Locale.ROOT);
    String bLowercase = b.toLowerCase(Locale.ROOT);
    compareStrings(aLowercase, bLowercase, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);
    compareNumbers(numA, numB, "numerically");
  }

  private static void compareStrings(String a, String b, String semantically) {
    System.out.println(
        a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ") + semantically + " equal.");
    System.out.println(
        a + " and " + b + " are " + ((!a.equals(b)) ? "" : "not ") + semantically + " inequal.");
  }

  private static void compareNumbers(double numA, double numB, String semantically) {
    System.out.println(
        numA
            + " and "
            + numB
            + " are "
            + ((Double.compare(numA, numB) == 0) ? "" : "not ")
            + semantically
            + " equal.");
  }
}
