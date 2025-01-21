public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";

    // Using the format method to replace 'X' with 'little'
    String replaced = String.format(original, little);

    System.out.println(replaced);
  }
}
