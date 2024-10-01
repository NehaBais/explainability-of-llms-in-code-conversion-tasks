public class Main {
  public static void main(String[] args) {
    final String s = "hello";

    System.out.println(s + " literal");
    // or
    System.out.printf("%s%s\n", s, " literal");

    String s2 = sconcat(s, " literal");
    System.out.println(s2);
  }

  public static String sconcat(final String s1, final String s2) {
    return new StringBuilder(s1).append(s2).toString();
  }
}
