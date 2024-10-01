public class Main {
  public static void main(String[] args) {
    String original = "Mary had a X lamb";
    String little = "little";

    // Using replace method
    String replaced = original.replace("X", little);

    System.out.println(replaced); // prints: Mary had a little lamb

    // Another way using StringBuilder class
    StringBuilder stringBuilder = new StringBuilder(original);
    int index = original.indexOf("X");
    if (index != -1) {
      stringBuilder.replace(index, index + "X".length(), little);
    }

    System.out.println(stringBuilder.toString()); // prints: Mary had a little lamb
  }
}
