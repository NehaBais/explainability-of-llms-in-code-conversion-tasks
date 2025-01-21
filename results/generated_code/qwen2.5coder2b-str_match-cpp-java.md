Sure, here is the Java equivalent of your C++ code. The corresponding methods in Java are `startsWith`, `contains`, and `lastIndexOf` respectively.

```java
public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        // Beginning
        if (s1.startsWith(s3)) {
            System.out.println("The first string starts with the second string.");
        } else {
            System.out.println("The first string does not start with the second string.");
        }

        // End
        if (s1.endsWith(s3)) {
            System.out.println("The first string ends with the second string.");
        } else {
            System.out.println("The first string does not end with the second string.");
        }

        // Anywhere
        if (s1.contains(s2)) {
            int loc = s1.indexOf(s2);
            if(loc != -1) {
                System.out.println("The second string is found at position: " + loc);
            } else {
                System.out.println("The second string is not found.");
            }
            while((loc = s1.indexOf(s3, loc+1)) != -1) {
                System.out.println("The second string is found at position: " + loc);
            }
        } else {
            System.out.println("The first string does not contain the second string.");
        }
    }
}
```

This Java code demonstrates the same functionality as your C++ code. It checks if the first string starts with the second string, ends with the second string, and contains the second string at any location, including multiple occurrences. If it finds matches, it prints out the locations of those matches.
