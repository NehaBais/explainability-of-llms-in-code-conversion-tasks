public class Main {
  public static void main(String[] args) {
    // Comparing two strings for exact equality
    System.out.println("abcd".equals("abcd")); // true

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    System.out.println(!"abcd".equals("dcba")); // true

    // Comparing two strings to see if one is lexically ordered before than the other
    System.out.println("abcd".compareTo("dcba") < 0); // true

    // Comparing two strings to see if one is lexically ordered after than the other
    System.out.println("abcd".compareTo("dcba") > 0); // false

    // Case sensitive comparison
    System.out.println("ABCD".equalsIgnoreCase("abcd")); // false

    // Case insensitive comparison
    System.out.println("ABCD".toLowerCase().equals("abcd".toLowerCase())); // true
  }
}
