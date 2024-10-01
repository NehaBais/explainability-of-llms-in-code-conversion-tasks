public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value
    String s = ", World";

    // Prepend the string variable with another string literal
    StringBuilder sb = new StringBuilder("Hello");
    sb.insert(0, s);

    System.out.println(sb.toString());
  }
}
