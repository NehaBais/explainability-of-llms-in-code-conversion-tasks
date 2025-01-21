public class StringComparison {
  public static void main(String[] args) {
    // Java string comparison operators:
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    } else {
      System.out.println(c + " is bytewise different from " + d);
    }

    if (!c.equals(d)) {
      System.out.println(c + " is bytewise different from " + d);
    } else {
      System.out.println(c + " is bytewise identical to " + d);
    }

    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically greater than " + d);
    } else if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically less than " + d);
    } else {
      System.out.println(c + " is equal to " + d);
    }

    if (c.compareToIgnoreCase(d) > 0) {
      System.out.println(c + " is case insensitive lexically greater than " + d);
    } else if (c.compareToIgnoreCase(d) < 0) {
      System.out.println(c + " is case insensitive lexically less than " + d);
    } else {
      System.out.println(c + " is equal to " + d);
    }

    // Java handles numeric strings as numbers, not lexically
    String num1 = "123";
    String num2 = "456";

    if (num1.compareTo(num2) < 0) {
      System.out.println(num1 + " is less than " + num2);
    } else if (num1.compareTo(num2) > 0) {
      System.out.println(num1 + " is greater than " + num2);
    } else {
      System.out.println(num1 + " is equal to " + num2);
    }

    // Case insensitive comparison using String.equalsIgnoreCase()
    if (c.equalsIgnoreCase(d)) {
      System.out.println(c + " equals to " + d + " ignoring case");
    } else {
      System.out.println(c + " does not equal to " + d + " ignoring case");
    }
  }
}
