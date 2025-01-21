 Here's the equivalent Java code for the given C++ code:

```java
public class StringMatching {
    public static void main(String[] args) {
        String s1 = "abcd";
        String s2 = "abab";
        String s3 = "ab";

        // Beginning
        boolean startsWith = s1.startsWith(s3);
        System.out.println("StartsWith: " + startsWith);

        // End
        boolean endsWith = s1.endsWith(s3);
        System.out.println("EndsWith: " + endsWith);

        // Anywhere
        int firstIndex = s2.indexOf(s3);
        if (firstIndex == -1) {
            System.out.println("Contains: false");
        } else {
            System.out.println("Contains: true at index " + firstIndex);

            // Handle multiple occurrences
            int lastIndex = s2.indexOf(s3, firstIndex + 1);
            while (lastIndex != -1) {
                System.out.println("Additional occurrence found at index " + lastIndex);
                lastIndex = s2.indexOf(s3, lastIndex + 1);
            }
        }
    }
}
```

Explanation:
1. **Beginning**: The method `startsWith` is used to check if the first string starts with the second string.
2. **End**: The method `endsWith` is used to check if the first string ends with the second string.
3. **Anywhere**: The method `indexOf` is used to find the first occurrence of the second string in the first string. If it doesn't exist, `indexOf` returns -1. Subsequent occurrences are found by calling `indexOf` with an offset starting from the end of the last found position plus one.

This Java code performs the same operations as the provided C++ code and includes additional handling for multiple occurrences of the second string in the first string.
