public class StringConcatenation {
  public static void main(String[] args) {
    // Create a string variable equal to any text value
    String s1 = "hello";
    System.out.println(s1 + " world");

    // Concatenate the original variable with another string literal
    String s2 = s1 + " world";
    System.out.println(s2);

    // Join strings with a delimiter and print them
    String joinedString = String.join(", ", "hello", "world", "mom");
    System.out.println(joinedString);

    // Create a new string variable for the joined result
    s2 = String.join(", ", "hello", "world", "mom");
    System.out.println(s2);
  }
}
