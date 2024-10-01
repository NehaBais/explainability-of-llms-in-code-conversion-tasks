public class Main {
  public static void main(String[] args) {
    String str = "Good Morning"; // Create a string variable equal to any text value
    String cstr = " to all"; // Append the string variable with another string literal
    String cstr2 = " !!!"; // Show the contents of the variable after the append operation
    int x = 0;

    if (str.length() > str.length() + cstr.length() + cstr2.length()) {
      /* 1st method */
      str += cstr;

      /* 2nd method */
      x = str.length();
      str += String.format("%s", cstr2);

      System.out.println(str); // Print the result
    }
  }
}
