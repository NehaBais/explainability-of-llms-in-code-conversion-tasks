public class Main {
  public static void main(String[] args) {
    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    if (str.length() + cstr.length() + cstr2.length() < 24) {
      str += cstr;
      str += cstr2;
      System.out.println(str);
    } else {
      System.out.println("Space allocated to str is insufficient.");
    }
  }
}
