public class HelloWorld {
  public static void main(String[] args) {
    String s = "hello";
    String s2 = sconcat(s, " literal");
    System.out.println("'" + s + "'");
    System.out.println("'" + s + "' + 'literal'");
    System.out.println("sconcat('" + s + "', 'literal') = '" + s2 + "'");
  }

  public static String sconcat(String s1, String s2) {
    return s1 + s2;
  }
}
