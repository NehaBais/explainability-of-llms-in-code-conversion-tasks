 Here's the equivalent Java code for the provided Rust code:

```java
public class Main {
    public static void printMatch(Integer matchPos) {
        if (matchPos != null) {
            System.out.println("Found match at pos " + matchPos);
        } else {
            System.out.println("Did not find any matches");
        }
    }

    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        // Determining if the first string starts with second string
        assert s1.startsWith(s3);
        // Determining if the first string contains the second string at any location
        assert s1.contains(s3);
        // Print the location of the match 
        printMatch(s1.indexOf(s3)); // Found match at pos 0
        printMatch(s1.indexOf(s2)); // Did not find any matches
        // Determining if the first string ends with the second string
        assert s2.endsWith(s3);
    }
}
```

### Explanation:
1. **String Matching in Java**:
   - `startsWith` method is used to check if a string starts with a given substring.
   - `contains` method is used to check if a string contains another string at any location.
   - `indexOf` method is used to find the position of the first occurrence of a substring within a string. If the substring is not found, it returns `-1`.
   - `endsWith` method is used to check if a string ends with a given substring.

2. **Optional Requirements**:
   - The `indexOf` method in Java returns the index of the first occurrence of the specified substring or `-1` if the substring is not found. This matches Rust's `find` method, so we use it directly.
   - The `printMatch` function prints whether a match was found and its position (if found).

3. **Assertions**:
   - In Java, assertions are used with the `assert` keyword. If the condition is false, an `AssertionError` is thrown. This behavior is similar to Rust's `assert!` macro for testing conditions.

This Java code should behave similarly to the provided Rust code in terms of string matching and assertion checks.
