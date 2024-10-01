public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";

    // Allocate a new string object to store the result
    StringBuilder result = new StringBuilder();

    // Prepend the string literal with the original string variable
    result.append(cstr);
    result.append(str);

    System.out.println(result.toString());
  }
}
