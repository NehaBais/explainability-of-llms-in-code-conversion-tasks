import java.util.*;

public class Main {
  public static void main(String[] args) {
    String s = "hello"; // create string variable equal to any text value
    System.out.printf("%s literal\n", s);
    /* or */
    System.out.printf("%s%s\n", s, " literal");

    String s2 = concatenateStrings(s, " literal"); // concatenate two strings
    System.out.println(s2);
  }

  public static String concatenateStrings(String s1, String s2) {
    return s1 + s2; // returns a new string concatenating the two given strings
  }
}
