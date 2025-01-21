The error message indicates that there is no suitable method found for join(String,List<Integer>). The problem might be due to incompatible Java versions between your local environment (which may not have the necessary methods) and the online compiler. 

To fix this issue, we can convert the ArrayList q2matches into a List<Integer> before calling String.join(). This conversion is not needed for languages like JavaScript or Python which are more flexible with different data types. However, Java requires all elements of an array to be of the same type, and we cannot mix Integer and int in one list.

Here's the corrected code:
```java
import java.util.*;

public class Main  {
  public static void main(String[] args)  {
    String stringA = "tacoloco";
    String stringB = "co";

    // 1. Determine if first string starts with second string
    boolean q1 = stringA.substring(0, stringB.length()).equals(stringB);

    // 2. Determine if first string contains second string
    int q2 = stringA.indexOf(stringB);
    List<Integer> q2matches = new ArrayList<>();

     // 3. Multiple matches
    while (true) {
      int index = stringA.indexOf(stringB, q2 + 1);
      if (index == -1) break;
      else q2matches.add(index);
    }

    // 4. Determine if first string ends with second string
    boolean q3 = stringA.substring(stringA.length() - stringB.length()).equals(stringB);

    System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (q2 >= 0 ? "Yes, at index " + q2 + "." : "No."));

    if (q2 >= 0 && !q2matches.isEmpty()) {
      System.out.println("   In fact, it happens " + q2matches.size() + " times within '" + stringA + "', at indexes " + String.join(", ", q2matches) + ".");
    }

    System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
```
