import java.util.Comparator;

public class StringComparison {

  public static void main(String[] args) {
    // Create two strings to compare
    String a = "abc";
    String b = "Bac";

    // Check if the strings are equal
    if (a.equals(b)) {
      System.out.println("The strings are equal");
    } else {
      System.out.println("The strings are not equal");
    }

    // Check if the strings are not equal
    if (!a.equals(b)) {
      System.out.println("The strings are not equal");
    } else {
      System.out.println("The strings are equal");
    }

    // Check if the first string is lexically before the second
    Comparator<String> comparator = String::compareToIgnoreCase;
    if (comparator.compare(a, b) < 0) {
      System.out.println("The first string is lexically before the second");
    } else {
      System.out.println("The first string is not lexically before the second");
    }

    // Check if the first string is lexically after the second
    if (comparator.compare(a, b) > 0) {
      System.out.println("The first string is lexically after the second");
    } else {
      System.out.println("The first string is not lexically after the second");
    }

    // Check if the first string is not lexically before the second
    if (comparator.compare(a, b) >= 0) {
      System.out.println("The first string is not lexically before the second");
    } else {
      System.out.println("The first string is lexically before the second");
    }

    // Check if the first string is not lexically after the second
    if (comparator.compare(a, b) <= 0) {
      System.out.println("The first string is not lexically after the second");
    } else {
      System.out.println("The first string is lexically after the second");
    }

    // Check if the strings are equal ignoring case
    if (a.equalsIgnoreCase(b)) {
      System.out.println("Both strings are equal when ignoring case");
    } else {
      System.out.println("The strings are not equal when ignoring case");
    }
  }
}
