public class Main {

  public static void main(String[] args) {
    String str = "Good Morning";
    String cstr = " to all";
    String cstr2 = " !!!";

    // append the string variable with another string literal
    StringBuilder sb = new StringBuilder(str);
    sb.append(cstr);
    sb.append(cstr2);

    // show the contents of the variable after the append operation
    System.out.println(sb.toString());
  }
}
