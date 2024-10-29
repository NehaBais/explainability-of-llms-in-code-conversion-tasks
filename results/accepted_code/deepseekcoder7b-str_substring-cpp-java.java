import java.util.*;

public class Main {
  public static void main(String[] args) {
    String s = "\u0030\u0031\u0032\u0033\u0034\u0035\u0036\u0037\u0038\u0039";
    int n = 3, m = 4;
    char c = '2';
    String sub = "456";

    System.out.println(s.subSequence(n, n + m)); // Starting from n characters in and of m length
    System.out.println(
        s.substring(n)); // Starting from n characters in, up to the end of the string
    if (s.length() > 0) { // Ensure that s is not empty before trying to remove last character
      System.out.println(s.substring(0, s.length() - 1)); // Whole string minus the last character
    }

    int indexOfC = s.indexOf(c);
    if (indexOfC != -1) { // If c is found in the string
      System.out.println(
          s.subSequence(
              indexOfC,
              indexOfC + m)); // Starting from known character within the string and of m length
    }

    int indexOfSub = s.indexOf(sub);
    if (indexOfSub != -1) { // If sub is found in the string
      System.out.println(
          s.subSequence(
              indexOfSub,
              indexOfSub + m)); // Starting from known substring within the string and of m length
    }
  }
}
