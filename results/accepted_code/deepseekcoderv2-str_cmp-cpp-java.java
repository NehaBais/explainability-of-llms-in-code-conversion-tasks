public class StringComparisonDemo {
  public static void demoCompare(String a, String b, String semantically) {
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + (a.equals(b) ? "" : "not ")
            + "exactly "
            + semantically
            + " equal.");

    System.out.println(
        a + " and " + b + " are " + (!a.equals(b) ? "" : "not ") + semantically + "inequal.");

    System.out.println(
        a + " is " + (a.compareTo(b) < 0 ? "" : "not ")
            << semantically
            << " ordered before "
            << b
            << '.');

    System.out.println(
        a + " is " + (a.compareTo(b) > 0 ? "" : "not ")
            << semantically
            << " ordered after "
            << b
            << '.');
  }

  public static void main(String[] args) {
    // Case-sensitive comparisons.
    String a = (args.length > 1) ? args[1] : "1.2.Foo";
    String b = (args.length > 2) ? args[2] : "1.3.Bar";
    demoCompare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    a = a.toLowerCase();
    b = b.toLowerCase();
    demoCompare(a, b, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the relevant parse method is
    // defined, eg int, long, etc.
    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);
    demoCompare(String.valueOf(numA), String.valueOf(numB), "numerically");
  }
}
