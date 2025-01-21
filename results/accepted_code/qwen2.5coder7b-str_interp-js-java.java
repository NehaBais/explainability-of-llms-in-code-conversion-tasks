public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";

    // replace() does not change the original string, so we don't need a new variable for the
    // result.
    String replaced = original.replace("X", little);

    System.out.println(replaced); // prints: Mary had a little lamb
  }
}
