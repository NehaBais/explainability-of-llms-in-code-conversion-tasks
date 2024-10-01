Here is how you can convert this Rust code to Java: 
In Java, we will use built-in methods of String class.
```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        // Determining if the first string starts with second string
        System.out.println(s1.startsWith(s3));  // true
        // Determining if the first string contains the second string at any location
        System.out.println(s1.contains(s3));   // true
        // Print the location of the match 
        int pos = s1.indexOf(s3); // pos will be 0 for this case
        if (pos > -1) {
            System.out.printf("Found match at pos %d%n", pos);   // Found match at pos 0
        } else {
           System.out.println("Did not find any matches");  // For different cases where no match is found
        }
        pos = s1.indexOf(s2); // In this case pos will be -1, indicating no match
        if (pos > -1) { 
            System.out.printf("Found match at pos %d%n", pos);  // For matching cases
        } else {
           System.out.println("Did not find any matches"); // For the case where no match is found   
        }
        // Determining if the first string ends with the second string
        System.out.println(s2.endsWith(s3));  // true 
    }
}
```
In Java, there are built-in methods to check for these conditions, like `startsWith()`, `contains()`, and `endsWith()`, etc. These can be directly used with the string objects. Also, note that unlike Rust, we don't have to use an `Option` type in Java when dealing with finding a substring within a string - instead, it returns the position of match or -1 if no match found.
