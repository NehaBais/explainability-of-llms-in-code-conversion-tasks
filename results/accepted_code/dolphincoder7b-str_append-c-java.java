import java.util.*;

class Main {
  public static void main(String[] args) {
    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    // failure when space allocated to str is insufficient.

    if (str.length() + cstr.length() + cstr2.length() < 24) {
      /*1st method*/
      str += cstr;

      /*2nd method*/
      int x = str.length();
      str = String.format("%s%s", str, cstr2);
      System.out.println(str);
    }
  }
}
