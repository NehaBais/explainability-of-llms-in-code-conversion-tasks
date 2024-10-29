public class Main {
  public static void main(String[] args) {
    String s = "hello";

    System.out.println(s + " literal"); // or System.out.printf("%s literal%n", s);

    String s2 = concatStrings(s, " literal");
    System.out.println(s2);
  }

  public static String concatStrings(String s1, String s2) {
    return s1 + s2;
  }
}
