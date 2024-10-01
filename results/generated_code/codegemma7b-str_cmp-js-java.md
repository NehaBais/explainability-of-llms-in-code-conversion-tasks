```java
public class StringComparison {

    public static void main(String[] args) {

        // Comparing two strings for exact equality
        String str1 = "abcd";
        String str2 = "abcd";
        boolean equals = str1.equals(str2); // true

        // Comparing two strings for inequality
        boolean notEquals = !str1.equals(str2); // false

        // Comparing two strings to see if one is lexically ordered before than the other
        boolean lessThan = str1.compareTo(str2) < 0; // true

        // Comparing two strings to see if one is lexically ordered after than the other
        boolean greaterThan = str1.compareTo(str2) > 0; // false

        // Case sensitive comparison
        boolean caseSensitiveEquals = str1.equalsIgnoreCase(str2); // false

        // Case insensitive comparison
        boolean caseInsensitiveEquals = str1.toLowerCase().equals(str2.toLowerCase()); // true

        // Numeric string comparison
        String numStr1 = "123";
        String numStr2 = "123";
        boolean numericEquals = numStr1.equals(numStr2); // true

        // Output the results
        System.out.println(equals);
        System.out.println(notEquals);
        System.out.println(lessThan);
        System.out.println(greaterThan);
        System.out.println(caseSensitiveEquals);
        System.out.println(caseInsensitiveEquals);
        System.out.println(numericEquals);
    }
}
```
</start_of_turn>
