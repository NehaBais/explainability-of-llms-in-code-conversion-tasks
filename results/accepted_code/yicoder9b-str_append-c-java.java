public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value.
    StringBuilder str = new StringBuilder("Good Morning");

    // Append the string variable with another string literal in the most idiomatic way.
    str.append(" to all").append(" !!!");

    // Show the contents of the variable after the append operation.
    System.out.println(str.toString());
  }
}
