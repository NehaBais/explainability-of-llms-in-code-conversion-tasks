public class StringInterpolationExample {
  public static void main(String[] args) {
    String originalString = "Mary had a {} lamb";
    String value1 = "little";

    // Option 1: Specify order of variables in printf-style syntax
    System.out.println(String.format(originalString, value1));
    // Output: Mary had a little lamb

    // Option 2: Use named arguments with printf-style syntax
    String name = "Mary";
    String adj = "little";
    System.out.println(String.format("%s had a %s lamb", name, adj));
    // Output: Mary had a little lamb
  }
}
