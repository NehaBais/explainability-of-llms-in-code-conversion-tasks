public class Main {
  public static void main(String[] args) {
    String str1 = "hello";
    String str2 = "world";

    // Comparing two strings for exact equality
    System.out.println("str1 == str2: " + (str1 == str2)); // false

    // Comparing two strings for inequality
    System.out.println("str1 != str2: " + !(str1 == str2)); // true

    // Comparing two strings to see if one is lexically ordered before the other
    System.out.println("str1 < str2: " + (str1.compareTo(str2) < 0)); // true

    // Comparing two strings to see if one is lexically ordered after the other
    System.out.println("str1 > str2: " + (str1.compareTo(str2) > 0)); // false

    // Case-sensitive comparison
    String str3 = "hello";
    String str4 = "HELLO";
    System.out.println("str3 == str4: " + (str3 == str4)); // false

    // Case-insensitive comparison
    System.out.println("str3 equalsIgnoreCase(str4): " + str3.equalsIgnoreCase(str4)); // true
  }
}
