public class Main {
  public static void main(String[] args) {
    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    if (str.length() < 24 && cstr.length() + cstr2.length() <= 24 - str.length()) {

      /* 1st method */
      str.concat(cstr);

      /* 2nd method */
      str = String.format("%s%s", str, cstr2);

      System.out.println(str);
    }
  }
}
