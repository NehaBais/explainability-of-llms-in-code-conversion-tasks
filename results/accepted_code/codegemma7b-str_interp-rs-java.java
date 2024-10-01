public class StringInterpolation {

  public static void main(String[] args) {
    String little = "little";

    // Using string formatting with {} placeholders
    System.out.println("Mary had a " + little + " lamb");

    // Using printf with named placeholders
    System.out.printf("%s had a %s lamb", "Mary", little);

    // Using String.format with named placeholders
    String name = "Mary";
    String adj = "little";
    System.out.println(String.format("%s had a %s lamb", name, adj));
  }
}
