The equivalent code in Java would look like this:

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        // Determining if the first string starts with second string
        System.out.println(s1.startsWith(s3));  // prints true
        // Determining if the first string contains the second string at any location
        System.out.println(s1.contains(s3));  // prints true
        // Print the location of the match 
        int index = s1.indexOf(s3);
        if (index != -1) {
            System.out.println("Found match at pos " + index);
        } else {
            System.out.println("Did not find any matches");
        }
        // Determining if the first string ends with the second string
        System.out.println(s2.endsWith(s3));  // prints true
    }
}
```
This code will demonstrate string matching in Java using both `startsWith`, `contains`, and `endsWith` methods. It will also show how to use `indexOf` method for finding a string within another, and check if the index found is -1 (which means the substring is not present) or not.
