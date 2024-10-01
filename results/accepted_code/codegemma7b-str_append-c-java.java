public class StringConcatenation {

  public static void main(String[] args) {

    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    // Check if the allocated memory for str is sufficient
    if (str.length() + cstr.length() + cstr2.length() <= str.toCharArray().length) {

      // Concatenate using the + operator
      str += cstr;

      // Append cstr2 using the StringBuilder class
      StringBuilder sb = new StringBuilder(str);
      sb.append(cstr2);
      str = sb.toString();

      // Print the contents of the variable after the append operation
      System.out.println(str);
    }
  }
}
