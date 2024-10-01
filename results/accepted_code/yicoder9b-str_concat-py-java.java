public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value.
    String s1 = "hello";
    System.out.println(s1 + " world");

    // Create another string variable whose value is the original
    // variable concatenated with another string literal.
    String s2 = s1 + " world";
    System.out.println(s2);

    // As in Python, we can also use String join method to concatenate strings.
    s1 = "hello";
    System.out.println(String.join(", ", s1, "world", "mom"));

    s2 = String.join(", ", s1, "world", "mom");
    System.out.println(s2);
  }
}
