public class StringComparison {

  public static void main(String[] args) {
    String a = (args.length > 0) ? args[0] : "1.2.Foo";
    String b = (args.length > 1) ? args[1] : "1.3.Bar";

    // Case-sensitive comparisons.
    compareStrings(a, b, "lexically");

    // Case-insensitive comparisons.
    compareStrings(a.toLowerCase(), b.toLowerCase(), "lexically");

    // Numeric comparisons.
    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);
    compareStrings(numA, numB, "numerically");
  }

  public static void compareStrings(Object a, Object b, String comparisonType) {
    System.out.println(
        a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ") + comparisonType + " equal.");

    System.out.println(
        a + " and " + b + " are " + ((a.equals(b)) ? "not " : "") + comparisonType + "inequal.");

    System.out.println(
        a
            + " is "
            + ((a.compareTo(b) < 0) ? "" : "not ")
            + comparisonType
            + " ordered before "
            + b
            + '.');

    System.out.println(
        a
            + " is "
            + ((a.compareTo(b) > 0) ? "" : "not ")
            + comparisonType
            + " ordered after "
            + b
            + '.');
  }
}
