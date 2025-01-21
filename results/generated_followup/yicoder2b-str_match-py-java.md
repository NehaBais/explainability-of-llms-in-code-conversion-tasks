The error arises because the method `strstrloc` takes more than it should. The method `indexOf` accepts two parameters, but there is only one argument provided while calling this method in the line `int loc = strstrloc("abcabc", "bc");` . We need to make sure that both the strings are passed as arguments and also an index which represents where in the string we should start looking for the second string (in your case, 'bc'). Therefore, we should pass `String haystack, String needle, int start` instead of only passing `String haystack, String needle`.

Here is the corrected Java code:
```java
public class Main {
  // Method to check if the first string starts with second string
  static boolean startswith(String str, String prefix) {
    return str.startsWith(prefix);
  }

  // Method to check if the first string contains the second string at any location
  static boolean contains(String str, String suffix) {
    return str.contains(suffix);
  }

  // Method to check if the first string ends with the second string
  static boolean endswith(String str, String suffix) {
    return str.endsWith(suffix);
  }

  // Main method to test the above methods
  public static void main(String[] args) {
    System.out.println(startswith("abcd", "ab")); // Expected output: true
    System.out.println(endswith("abcd", "cd")); // Expected output: true
    System.out.println(contains("abcabc", "bc")); // Expected output: true
    System.out.println(startswith("abcabc", "ab")); // Expected output: true
    int loc = strstrloc("abcabc", "bc"); // Expected output: 1
    loc = strstrloc("abcabc", "ab", loc+1); // Expected output: 3
  }

  // Method to return the location of a string in another string if present
  static int strstrloc(String haystack, String needle, int start) {
    int index = haystack.indexOf(needle, start);
    if (index == -1) {
      return index;
    } else {
      return index + 1; // location is 1-based, not 0-based in python, so we add 1 to the original value
    }
  }
}
```
