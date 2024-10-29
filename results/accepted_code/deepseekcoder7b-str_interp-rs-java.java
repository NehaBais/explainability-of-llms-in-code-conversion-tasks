public class Main {

  public static void main(String[] args) {
    // Replace "X" with a string literal
    String str1 = "Mary had a X lamb";
    String result1 = str1.replace("X", "big");
    System.out.println(result1); // prints: Mary had a big lamb

    // Use format specifiers in the original string (Java equivalent to Rust's {} placeholders)
    String name = "Mary";
    String adj = "little";
    String str2 = "%s had a %s lamb";
    System.out.println(String.format(str2, name, adj)); // prints: Mary had a little lamb
  }
}
