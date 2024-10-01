public class string {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";
    if (c == d) {
      System.out.println(c + " is bytewise identical to " + d);
    } else if (c != d) {
      System.out.println(c + " is not equal to " + d);
    }
    int cmp = c.compareTo(d);
    if (cmp > 0) {
      System.out.println(c + " is lexically greater than " + d);
    } else if (cmp < 0) {
      System.out.println(c + " is lexically less than " + d);
    } else {
      System.out.println(c + " is equal to " + d);
    }
    boolean eqf = c.equalsIgnoreCase(d);
    if (eqf) {
      System.out.println(c + " equals case-insensitive " + d);
    } else {
      System.out.println(c + " does not equal case-insensitive " + d);
    }
  }
}
