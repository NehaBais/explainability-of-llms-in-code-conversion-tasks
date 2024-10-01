```java
import java.util.Scanner;

public class StringMatching {
    public static void main(String[] args) {
        // Beginning
        String s1 = "abcd";
        String s2 = "abab";
        boolean isStartWith = s1.startsWith(s2);
        System.out.println("Is s1 starts with s2? " + isStartWith);

        // End
        isStartWith = s1.endsWith(s2);
        System.out.println("Is s1 ends with s2? " + isStartWith);

        // Anywhere
        int loc = s1.indexOf(s2);
        if (loc != -1) {
            System.out.println("s2 is found at index: " + loc);
        } else {
            System.out.println("s2 is not found in s1");
        }
    }
}
```
Note: In Java, we can use the `startsWith()` and `endsWith()` methods to check if a string starts with or ends with another string, respectively. We can also use the `indexOf()` method to find the first occurrence of a substring in a string. If the substring is not found, the method returns -1.
