public class Main {
  public static void main(String[] args) {
    String s = "hello";
    System.out.println(s);

    // Java doesn't directly concatenate strings, so we have to create a new String object
    // Note that in Java, we use the '+' operator for string concatenation.
    String s1 = s + " world";
    System.out.println(s1);
  }
}
