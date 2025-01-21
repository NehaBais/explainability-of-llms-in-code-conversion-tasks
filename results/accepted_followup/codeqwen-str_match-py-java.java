public class Main {
  public static void main(String[] args) {
    System.out.println("Does 'abcd' start with 'ab'? " + startsWith("abcd", "ab")); // prints true
    System.out.println("Does 'abcd' end with 'zn'? " + endsWith("abcd", "zn")); // prints false
    System.out.println("Is 'bb' in 'abab'? " + contains("abab", "bb")); // prints false
    System.out.println("Is 'ab' in 'abab'? " + contains("abab", "ab")); // prints true

    int loc = find("abab", "bb"); // returns -1
    if (loc != -1) {
      System.out.println("Location of the match: " + loc);
    }
    loc = find("abab", "ab", loc + 1);
    while (loc != -1) {
      System.out.println("Match found at location: " + loc);
      loc = find("abab", "ab", loc + 1);
    }
  }

  public static boolean startsWith(String str, String substr) {
    return str.startsWith(substr);
  }

  public static boolean endsWith(String str, String substr) {
    return str.endsWith(substr);
  }

  public static boolean contains(String str, String substr) {
    return str.contains(substr);
  }

  public static int find(String str, String substr) {
    return str.indexOf(substr);
  }

  public static int find(String str, String substr, int startIndex) {
    return str.indexOf(substr, startIndex);
  }
}
