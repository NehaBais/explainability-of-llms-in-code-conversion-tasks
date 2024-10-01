import java.util.*;

public class Main {
  // method to compare two string for exact equality
  private static boolean isEqual(String a, String B) {
    return A.equals(B);
  }

  // method to compare two string for inequality
  private static boolean IsNotEqual(String A, String B) {
    return !IsEqual(A, B);
  }

  // method to compare two string for lexical comparison: greater than
  private static boolean IsGreaterThan(String A, String B) {
    return A.compareTo(B) > 0;
  }

  // method to compare two string for lexical comparison: less than
  private static boolean IsLessThan(String A, String B) {
    return A.compareTo(B) < 0;
  }

  // method to compare two string for lexical comparison: greater or equal
  private static boolean IsGreaterOrEqual(String A, String B) {
    return IsNotLessThan(A, B);
  }

  // method to compare two string for lexical comparison: less or equal
  private static boolean IsLessOrEqual(String A, String B) {
    return IsNotGreaterThan(A, B);
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // Get inputs from user
    System.out.println("Enter first string:");
    String str1 = sc.nextLine();
    System.out.println("Enter second string:");
    String str2 = sc.nextLine();

    if (IsEqual(str1, str2)) {
      System.out.println("Strings are equal");
    } else {
      System.out.println("Strings are not equal");
    }

    if (IsGreaterThan(str1, str2)) {
      System.out.println("First string is greater than second string");
    } else if (IsLessThan(str1, str2)) {
      System.out.println("First string is less than second string");
    } else {
      System.out.println("Strings are equal in terms of lexical comparison");
    }

    sc.close();
  }
}
