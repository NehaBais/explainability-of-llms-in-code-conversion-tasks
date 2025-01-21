public class StringComparison {
  public static void main(String[] args) {
    System.out.println("abcd".equals("abcd")); // true
    System.out.println("abcd".equals("abcd")); // true
    System.out.println(123 == Integer.parseInt("123")); // true
    System.out.println(!("abcd".equals("dcba"))); // true
    System.out.println(123 != Integer.parseInt("123")); // false
    System.out.println(!("abcd".equals("abcd"))); // true
    System.out.println("ABCD".equalsIgnoreCase("abcd")); // true (case insensitive)
  }
}
