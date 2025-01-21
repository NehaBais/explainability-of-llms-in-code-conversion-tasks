 Sure, here is the equivalent Java code that demonstrates the requested comparisons:

```java
public class StringComparison {
    public static void main(String[] args) {
        System.out.println("abcd".equals("abcd")); // true
        System.out.println("abcd".equals("abcd")); // true
        System.out.println(123 == Integer.parseInt("123")); // true
        System.out.println(!("abcd".equals("dcba"))); // true
        System.out.println(123 != Integer.parseInt("123")); // false
        System.out.println(!("abcd".equals("abcd"))); // true
        System.out.println("ABCD".equalsIgnoreCase("abcd")); // true (case insensitive)
    }
}
```

### Explanation:

1. **Comparing two strings for exact equality**:
   - In Java, use the `equals` method to compare string values.
   ```java
   System.out.println("abcd".equals("abcd")); // true
   ```

2. **Comparing two strings for inequality (i.e., the inverse of exact equality)**:
   - Use the negation of the `equals` method.
   ```java
   System.out.println(!("abcd".equals("dcba"))); // true
   ```

3. **Comparing two strings to see if one is lexically ordered before than the other**:
   - Use the `compareTo` method for lexicographical comparison.
   ```java
   System.out.println("abcd".compareTo("dcba") < 0); // true
   ```

4. **Comparing two strings to see if one is lexically ordered after than the other**:
   - Again, use the `compareTo` method.
   ```java
   System.out.println("abcd".compareTo("dcba") > 0); // false
   ```

5. **How to achieve both case sensitive comparisons and case insensitive comparisons within the language**:
   - Use the `equalsIgnoreCase` method for case-insensitive comparison.
   ```java
   System.out.println("ABCD".equalsIgnoreCase("abcd")); // true
   ```

6. **Comparing numeric strings if these are not treated lexically**:
   - Convert the string to an integer and compare the integers.
   ```java
   System.out.println(123 == Integer.parseInt("123")); // true
   ```

### Additional Comparisons:
Java provides various methods for comparing strings, such as `compareTo`, `equalsIgnoreCase`, and more. The provided Java code demonstrates these comparisons effectively.
