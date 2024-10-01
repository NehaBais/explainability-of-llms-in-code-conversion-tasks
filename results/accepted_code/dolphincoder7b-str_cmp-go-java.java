import java.util.Arrays;

class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    // Java language string comparison operators:
    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    }
    if (!c.equals(d)) {
      System.out.println(c + " is bytewise different from " + d);
    }
    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically bytewise greater than " + d);
    }
    if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically bytewise less than " + d);
    }
    if (c.compareTo(d) >= 0) {
      System.out.println(c + " is lexically bytewise greater than or equal to " + d);
    }
    if (c.compareTo(d) <= 0) {
      System.out.println(c + " is lexically bytewise less than or equal to " + d);
    }

    // Java is strongly typed and will not directly compare a value of string type to a value of
    // numeric type.
    // A case insensitive comparison can be done with the equalsIgnoreCase method in String:
    if (c.equalsIgnoreCase(d)) {
      System.out.println(
          c
              + " equal to "
              + d
              + " when interpreted as UTF-8 and compared under Unicode simple case folding rules.");
    } else {
      System.out.println(
          c
              + " not equal to "
              + d
              + " when interpreted as UTF-8 and compared under Unicode simple case folding rules.");
    }

    // Seeing that the built in operators work bytewise and the equalsIgnoreCase method works by
    // byte for each character, you might then ask about other equality and inequality tests that
    // interpret UTF-8.
    // Functions for this are not in the Java standard library but are available as third party
    // libraries such as Apache Commons Lang or Stringcompare4j. These use Unicode normalization,
    // collation tables, and locale sensitive comparisons.

    // To compare numeric strings lexically, you can use a custom comparator:
    Arrays.sort(new String[] {"1", "2"}); // ["1", "2"]
    Arrays.sort(new String[] {"10", "2"}); // ["2", "10"]
  }
}
