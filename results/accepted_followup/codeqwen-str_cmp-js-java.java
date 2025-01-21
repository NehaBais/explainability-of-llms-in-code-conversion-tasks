public class Main {
  public static void main(String[] args) {
    System.out.println(
        "abcd".equals("abcd"), // true
        "abcd".equals("abcd"), // true
        123 == Integer.parseInt("123"), // true
        "123".compareTo("123") == 0, // true
        "ABCD".toLowerCase().equals("abcd".toLowerCase()), // true (case insensitive)
        !"abcd".equals("dcba"), // false
        123 != Integer.parseInt("123"), // false
        123 != Integer.parseInt("123"), // false
        "abcd".compareTo("dcba") < 0, // true
        "abcd".compareTo("dcba") > 0); // false
  }
}
