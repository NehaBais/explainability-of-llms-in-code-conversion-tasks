The equivalent code in Java would be:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        // Determining if the first string starts with second string
        assertTrue(s1.startsWith(s3));
        // Determining if the first string contains the second string at any location
        assertTrue(s2.contains(s3));
        // Determine the position of a match and print it
        int pos = s1.indexOf(s3);
        if (pos != -1) {
            System.out.println("Found match at pos " + pos);
        } else {
            System.out.println("Did not find any matches");
        }
        // Determining if the first string ends with the second string
        assertTrue(s2.endsWith(s3));
    }
}
```
In Java, we use assertTrue for testing boolean conditions rather than assert! which in Rust is equivalent to `assert`. The indexOf function is used to find a substring within another string, and it returns the first occurrence of the specified value if found or -1 otherwise. The printf format for printing messages is slightly different from Rust but it gives the same output.
