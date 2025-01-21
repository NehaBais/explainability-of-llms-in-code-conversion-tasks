public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = new String("Bac");

    if (a.equals(b)) {
      System.out.println("The strings are equal");
    }

    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    }

    if (a.compareTo(b) > 0) {
      System.out.println("The first string is lexically after the second");
    }

    if (a.compareTo(b) < 0) {
      System.out.println("The first string is lexically before the second");
    }

    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    }
  }
}
