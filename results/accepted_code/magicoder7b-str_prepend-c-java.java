public class Main {
  public static void main(String[] args) {
    String str = "my String";
    String cstr = "Changed ";

    str = cstr + new StringBuilder(str).reverse().toString();

    System.out.println(str);
  }
}
