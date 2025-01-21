public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value.
    StringBuilder s = new StringBuilder("World");

    // Prepend the string variable with another string literal.
    s.insert(0, "Hello ");

    // Print the result.
    System.out.println(s.toString());
  }
}
