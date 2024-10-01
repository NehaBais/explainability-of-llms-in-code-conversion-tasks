
Java:
```java
public class StringMatching {
    public static void printMatch(Integer possibleMatch) {
        System.out.println("Possible match at position " + (possibleMatch != null ? possibleMatch : "None"));
    }

    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";
        
        // Determining if the first string starts with second string
        assert (s1.startsWith(s3));
        // Determining if the first string contains the second string at any location
        assert (s1.contains(s3));
        // Print the location of the match 
        printMatch(s1.indexOf(s3)); // Found match at pos 0
        printMatch(s1.indexOf(s2)); // Did not find any matches
        // Determining if the first string ends with the second string
        assert (s2.endsWith(s3));
    }
}
```

