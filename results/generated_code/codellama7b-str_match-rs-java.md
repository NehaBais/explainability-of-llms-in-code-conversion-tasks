Sure, I can help you with that! Here's the Rust code converted to Java:
```java
public class StringMatching {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        // Determining if the first string starts with second string
        boolean isStartsWith = s1.startsWith(s3);
        System.out.println("Is '" + s1 + "' starts with '" + s3 + "'? " + isStartsWith);
        
        // Determining if the first string contains the second string at any location
        boolean isContains = s1.contains(s3);
        System.out.println("Does '" + s1 + "' contain '" + s3 + "'? " + isContains);
        
        // Print the location of the match 
        int startIndex = s1.indexOf(s3);
        if (startIndex != -1) {
            System.out.println("Found match at pos " + startIndex);
        } else {
            System.out.println("Did not find any matches");
        }
        
        // Determining if the first string ends with the second string
        boolean isEndsWith = s2.endsWith(s3);
        System.out.println("Is '" + s2 + "' ends with '" + s3 + "'? " + isEndsWith);
    }
}
```
The output of the Java code will be similar to the Rust code, but instead of using the `assert!` macro, it uses the `System.out.println()` method to print the results.
