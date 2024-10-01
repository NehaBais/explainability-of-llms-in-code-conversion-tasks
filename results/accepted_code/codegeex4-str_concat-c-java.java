public class Main {
  public static void main(String[] args) {
    String s = "hello";
    String s1 = s + " literal";

    System.out.println(s);
    /* or */
    System.out.println(s1);

    String s2 = concatStrings(s, " literal");
    System.out.println(s2);
  }

  public static String concatStrings(String str1, String str2) {
    return str1.concat(str2);
  }
}
