public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";

    // Replace "X" with "little" in the original string
    String replaced = original.replace("X", little);

    System.out.println(replaced); // Output: Mary had a little lamb
  }
}
