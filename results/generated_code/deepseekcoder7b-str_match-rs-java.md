Below is your Java code equivalent to Rust provided above. Here, in addition to checking for start, contains (substring), and end of strings like you did using `assert`, I've added a method that can find all occurrences of substring in the given string by repeatedly calling indexOf method from java.util package:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        // Determining if the first string starts with second string
        boolean startMatch = s1.startsWith(s3);
        System.out.println("Does string 1 start with string 3: " + startMatch);
    
        // Determining if the first string contains the second string at any location
        boolean containMatch = s1.contains(s3);
        System.out.println("Does string 1 contain string 3: " + containMatch);
        
        findAllOccurrences(s1, s3);
    
        // Determining if the first string ends with the second string
        boolean endMatch = s2.endsWith(s3);
        System.out.println("Does string 2 end with string 3: " + endMatch);
    }
  
    public static void findAllOccurrences(String text, String str) {
        int lastIndex = 0;
        while (lastIndex != -1){
            lastIndex = text.indexOf(str,lastIndex);
            if(lastIndex == -1){
                break;
            }
            System.out.println("Found match at pos " + lastIndex);
            lastIndex += str.length();
        }
    }
}
```
In the function findAllOccurrences, we start our search from `lastIndex` (0 initially) and keep finding subsequent occurrences of string in text. If no more occurrence is found then indexOf will return -1 which breaks the loop. Note that after each successful match, we increment lastIndex by str's length because indexes are zero-based and we don't want to find same substring again.

