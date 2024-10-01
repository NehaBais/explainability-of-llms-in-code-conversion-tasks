public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";
    str = cstr + new String(str); // prepend
    System.out.println(str);
  }
}
