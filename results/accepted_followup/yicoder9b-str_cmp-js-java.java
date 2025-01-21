public class Main {
  public static void main(String[] args) {
    System.out.println("abcd".equals("abcd")); // true (exact equality - case sensitive)
    System.out.println("abcd".equals("abcd")); // true (exact equality - case sensitive)
    System.out.println(
        123 == Integer.parseInt("123")); // true (numeric string comparison as integer)
    System.out.println(
        123 != Integer.parseInt("123")); // false (numeric string comparison as integer)
    System.out.println("ABCD".equals("abcd")); // false (case sensitive equality check)
    System.out.println("ABCD".equalsIgnoreCase("abcd")); // true (case insensitive equality check)
    System.out.println(!"abcd".equals("dcba")); // true (check for inequality - case sensitive)
    System.out.println(
        !"abcd".compareTo("dcba") > 0); // false (check for inequality - case sensitive)
    System.out.println(
        "abcd".compareTo("dcba") < 0); // true (lexical order check where str1 is before str2)
    System.out.println(
        "abcd".compareTo("dcba") > 0); // false (lexical order check where str1 is after str2)
  }
}
