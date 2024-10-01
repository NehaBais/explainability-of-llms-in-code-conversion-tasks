public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value.
    String s1 = "hello";
    System.out.println(s1 + " world");

    // Concatenate the original variable with another string literal.
    String s2 = s1 + " world";
    System.out.println(s2);

    // Join a list of strings into one string, separated by commas.
    String[] words = {"hello", "world", "mom"};
    String result = String.join(", ", words);
    System.out.println(result);

    // Concatenate the original variable with another string literal again.
    s2 = s1 + " world";
    System.out.println(s2);
  }
}
