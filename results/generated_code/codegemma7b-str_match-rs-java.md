```java
public class StringMatching {

    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        // Determining if the first string starts with second string
        assert(s1.startsWith(s3));

        // Determining if the first string contains the second string at any location
        assert(s1.contains(s3));

        // Print the location of the match
        int matchPos = s1.indexOf(s3);
        if (matchPos != -1) {
            System.out.println("Found match at pos " + matchPos);
        } else {
            System.out.println("Did not find any matches");
        }

        // Handling multiple occurrences of a string for part 2
        int count = 0;
        int pos = s1.indexOf(s2);
        while (pos != -1) {
            count++;
            pos = s1.indexOf(s2, pos + s2.length());
        }
        System.out.println("Number of matches: " + count);

        // Determining if the first string ends with the second string
        assert(s2.endsWith(s3));
    }
}
```

