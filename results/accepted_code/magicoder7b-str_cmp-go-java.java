public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
      System.out.println(c + " is identical to " + d);
    }
    if (!c.equals(d)) {
      System.out.println(c + " is different from " + d);
    }
    if (c.compareTo(d) > 0) {
      System.out.println(c + " is lexically greater than " + d);
    }
    if (c.compareTo(d) < 0) {
      System.out.println(c + " is lexically lesser than " + d);
    }

    // For case-insensitive compare you can use toLowerCase() method:
    String e = c.toLowerCase();
    String f = d.toLowerCase();

    if (e.equals(f)) {
      System.out.println(c + " is identical to " + d);
    } else {
      System.out.println(c + " is different from " + d);
    }
  }
}
