Sure, I can help you with that! Here's the code converted from JavaScript to Java:
```java
import java.util.*;

public class StringMatching {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    // stringA starts with stringB
    boolean q1 = stringA.substring(0, stringB.length()).equals(stringB);

    // stringA contains stringB
    int q2 = stringA.indexOf(stringB);

    // multiple matches
    List<Integer> q2matches = new ArrayList<>();
    Pattern pattern = Pattern.compile(stringB, Pattern.MULTILINE | Pattern.CASE_INSENSITIVE);
    Matcher matcher = pattern.matcher(stringA);
    while (matcher.find()) {
      int index = matcher.start();
      q2matches.add(index);
    }

    // stringA ends with stringB
    boolean q3 = stringA.substring(stringA.length() - stringB.length()).equals(stringB);

    System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (q2 != -1 ? "Yes, at index " + q2 + ".": "No."));
    if (q2matches.size() > 0) {
      System.out.println("   In fact, it happens " + q2matches.size() + " times within '" + stringA + "', at index" + (q2matches.size() > 1 ? "es" : "") + " " + String.join(", ", q2matches) + ".");
    }
    System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
```
Here's a breakdown of the changes I made:

1. In JavaScript, we can use `indexOf()` to find the first occurrence of a substring within a string. In Java, we can use `String#indexOf(int ch)` method to find the first occurrence of a character within a string. However, since we are looking for multiple occurrences, I've used the `Pattern` class to create a regular expression that matches the substring and then used the `Matcher` class to find all occurrences in the input string.
2. In JavaScript, we can use `substring()` method to extract a substring from a string. In Java, we can use `String#substring(int beginIndex)` method to extract a substring from a string starting at a specific index. We also used `String#substring(int beginIndex, int endIndex)` method to extract a substring from a string starting at `beginIndex` and ending at `endIndex`.
3. In JavaScript, we can use `===` operator to compare two strings for equality. In Java, we can use `equals()` method to compare two strings for equality. However, since we are looking for multiple occurrences of a substring, I've used the `Pattern` class to create a regular expression that matches the substring and then used the `Matcher` class to find all occurrences in the input string.
4. In JavaScript, we can use `console.log()` method to print output to the console. In Java, we can use `System.out.println()` method to print output to the console.
5. I've also removed some unnecessary variables and comments from the code.
