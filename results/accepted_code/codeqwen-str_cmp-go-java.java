import java.util.*;

public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
      System.out.println(c + " is bytewise identical to " + d);
    }

    if (!c.equals(d)) {
      System.out.println(c + " Is bytewise different from " + d);
    }

    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically bytewise greater than " + d);
    }

    if (c.compareTo(d) < 0) {
      System.out.println(c + " Is lexically bytewise less than " + d);
    }

    if (c.compareTo(d) >= 0) {
      System.out.println(c + " Is lexically bytewise greater than or equal to " + d);
    }

    if (c.compareTo(d) <= 0) {
      System.out.println(c + " Is lexically bytewise less than or equal to " + d);
    }

    String eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if (c.equalsIgnoreCase(d)) {
      System.out.println(c + " Equal to " + d + " " + eqf);
    } else {
      System.out.println(c + " Not equal to " + d + " " + eqf);
    }
  }
}
