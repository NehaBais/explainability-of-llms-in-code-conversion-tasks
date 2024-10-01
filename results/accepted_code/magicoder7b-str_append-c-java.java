public class Main {
  public static void main(String[] args) {
    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    // Concatenate the strings in a safe way by using the StringBuilder class.
    if (str != null && cstr != null && cstr2 != null) {
      str += cstr;
      str += cstr2;

      System.out.println(str);
    }
  }
}
