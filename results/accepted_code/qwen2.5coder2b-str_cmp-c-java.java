import java.util.*;

public class StringComparison {

  static void compare(String a, String b) {
    System.out.print(a + " ");
    if (a.equals(b)) {
      System.out.println("0");
    } else if (!a.equals(b)) {
      System.out.println("1");
    }
    if (a.compareTo(b) > 0) {
      System.out.println("1");
    } else if (a.compareTo(b) < 0) {
      System.out.println("0");
    }
    if (a.compareTo(b) >= 0) {
      System.out.println("1");
    } else if (a.compareTo(b) <= 0) {
      System.out.println("0");
    }
    if (a.compareToIgnoreCase(b) > 0) {
      System.out.println("1");
    } else if (a.compareToIgnoreCase(b) < 0) {
      System.out.println("0");
    }
    if (a.compareToIgnoreCase(b) >= 0) {
      System.out.println("1");
    } else if (a.compareToIgnoreCase(b) <= 0) {
      System.out.println("0");
    }
    if (b.equalsIgnoreCase(a)) {
      System.out.println("1");
    } else if (!b.equalsIgnoreCase(a)) {
      System.out.println("0");
    }
    System.out.println();
  }

  public static void main(String[] args) {
    String[] a = {"ball", "bell", "ball", "ball", "YUP", "YEP"};
    String[] b = {"ball", "BELL", "ball", "BALL", "YUP", "yep"};

    for (int i = 0; i < a.length; i++) {
      compare(a[i], b[i]);
      compare(a[i].toLowerCase(), b[i].toLowerCase());
    }
  }
}
