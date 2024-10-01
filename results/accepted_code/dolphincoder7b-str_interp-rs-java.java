public class Main {
  public static void main(String[] args) {
    String original = "Mary had a %s lamb.";
    String replacement = "big";

    // string interpolation in C# is done using {0} to refer to arguments
    System.out.printf(original, replacement);

    // or using {1} and so on if you prefer
    String orderOriginal = "{1} had a {0} lamb.";
    System.out.printf(orderOriginal, "little", "Mary");

    // or using named arguments
    String namedOriginal = "{name} had a {adj} lamb.";
    System.out.printf(namedOriginal, "adj=little", "name=Mary");
  }
}
