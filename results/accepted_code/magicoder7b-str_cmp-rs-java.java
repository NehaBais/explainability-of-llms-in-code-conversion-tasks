public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = "Bac";

    if (a.equalsIgnoreCase(b)) System.out.println("The strings are equal");
    else System.out.println("The strings are not equal");

    if (!a.compareTo(b) > 0) System.out.println("The first string is lexically before the second");
    else System.out.println("The first string is lexically after the second");

    if (a.compareToIgnoreCase(b) >= 0)
      System.out.println("The first string is not lexically before the second");
    else System.out.println("The first string is not lexically after the second");
  }
}
