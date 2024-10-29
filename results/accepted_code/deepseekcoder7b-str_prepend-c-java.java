public class Main {
  public static void main(String[] args) {
    String str = new String("my String"); // original string variable
    String prependStr = "Changed "; // the other string literal to be prepended

    // create a new string by concatenating the two strings.
    String result = prependStr + str;

    System.out.println(result); // print out the resulting string
  }
}
