```java
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {

    public static void main(String[] args) {
        String first = "abracadabra";
        String second = "abr";

        // Determine if the first string starts with second string
        boolean startsWith = first.startsWith(second);
        System.out.println("1. " + first + " starts with " + second + ": " + startsWith);

        // Determine if the first string contains the second string at any location
        int containsIndex = first.indexOf(second);
        System.out.println("2. " + first + " contains " + second + ": " + (containsIndex >= 0));

        // Check for all occurrences of the second string in the first string
        Pattern pattern = Pattern.compile(("\\Q" + second + "\\E") + "(?=\\w*");
        Matcher matcher = pattern.matcher(first);
        if (matcher.find()) {
            int matchStart = matcher.start();
            System.out.println("2.1. found at location " + matchStart);
            while (matcher.find()) {
                System.out.println("2.2. found at location " + matcher.start());
            }
            System.out.println("2.2. and that's all");
        } else {
            System.out.println("2. No occurrences found");
        }

        // Determine if the first string ends with the second string
        boolean endsWith = first.endsWith(second);
        System.out.println("3. " + first + " ends with " + second + ": " + endsWith);

    }
}
```

This Java code performs the same operations as your Go code. It uses regular expressions to check for all occurrences of the second string in the first string and prints out their locations, including multiple matches.
