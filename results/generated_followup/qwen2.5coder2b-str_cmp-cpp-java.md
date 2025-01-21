The error message indicates that there are missing semicolons after each `println` statement. In Java, every expression must be followed by a semicolon to indicate the end of an instruction.

To fix this, we need to add semicolons at the end of each `println` statement as shown below:

```java
public class StringComparison {

  public static void main(String[] args) {
    
    // Case-sensitive comparison.
    String a = args.length > 1 ? args[0] : "1.2.Foo";
    String b = args.length > 1 ? args[1] : "1.3.Bar";
    compareStrings(a, b, true);
    
    // Case-insensitive comparison by folding both strings to a common case.
    String lowerA = a.toLowerCase();
    String lowerB = b.toLowerCase();
    compareStrings(lowerA, lowerB, true);

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    double numA;
    double numB;
    try {
      numA = Double.parseDouble(args.length > 1 ? args[0] : "1.2.Foo");
      numB = Double.parseDouble(args.length > 1 ? args[1] : "1.3.Bar");
    } catch (NumberFormatException e) {
      System.err.println("Invalid number format.");
      return;
    }
    compareNumbers(numA, numB);
  }

  public static void compareStrings(String a, String b, boolean caseSensitive) {
    if (caseSensitive) {
      System.out.println(a + " and " + b + " are "
                      + ((a.equals(b)) ? "" : "not ")
                      + "exactly equal.");
      System.out.println(a + " and " + b + " are "
                      + ((a.compareTo(b) != 0) ? "" : "not ")
                      + "inequal.");
    } else {
      System.out.println("Lower case of a: " + a.toLowerCase());
      System.out.println("Lower case of b: " + b.toLowerCase());
      System.out.println(a + " is "
                      + ((a.compareTo(b) < 0) ? "" : "not ")
                      + "ordered before " + b + ".");
      System.out.println(a + " is "
                      + ((a.compareTo(b) > 0) ? "" : "not ")
                      + "ordered after " + b + ".");
    }
  }

  public static void compareNumbers(double a, double b) {
    System.out.println("NumA: " + a);
    System.out.println("NumB: " + b);
    System.out.println(a + " is "
                      + ((a == b)) ? "" : "not ")
                      + "equal.");
    System.out.println(a + " and " + b + " are "
                      + ((a != b)) ? "" : "not ")
                      + "inequal.");
  }
}
```
