public class Main {
  public static void demoCompare(Comparable<String> a, Comparable<String> b, String semantically) {
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + (a.compareTo((String) b) == 0 ? "" : "not ")
            + "exactly lexically equal.");

    System.out.println(
        a
            + " and "
            + b
            + " are "
            + (a.compareTo((String) b) != 0 ? "" : "not ")
            + semantically
            + "inequal.");

    System.out.println(
        a
            + " is "
            + (a.compareTo((String) b) < 0 ? "" : "not ")
            + semantically
            + " ordered before "
            + b
            + '.');

    System.out.println(
        a
            + " is "
            + (a.compareTo((String) b) > 0 ? "" : "not ")
            + semantically
            + " ordered after "
            + b
            + '.');
  }

  public static void main(String[] args) {
    String a = (args.length > 1) ? args[1] : "1.2.Foo";
    String b = (args.length > 2) ? args[2] : "1.3.Bar";

    demoCompare(a, b, "lexically");

    a = a.toLowerCase();
    b = b.toLowerCase();

    demoCompare(a, b, "lexically");

    double numA = Double.parseDouble(a);
    double numB = Double.parseDouble(b);

    demoCompare(numA, numB, "numerically");
  }
}
