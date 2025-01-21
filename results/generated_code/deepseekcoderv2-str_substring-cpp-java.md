 Here's the equivalent Java code for the given C++ code, which handles the specified requirements:

```java
public class SubstringExample {
    public static void main(String[] args) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, Math.min(n + m, s.length())));
        System.out.println(s.substring(n));
        System.out.println(s.substring(0, s.length() - 1));
        int startIndex = s.indexOf(String.valueOf(c));
        if (startIndex != -1) {
            System.out.println(s.substring(startIndex, Math.min(startIndex + m, s.length())));
        } else {
            System.out.println("Character not found");
        }
        int subStartIndex = s.indexOf(sub);
        if (subStartIndex != -1) {
            System.out.println(s.substring(subStartIndex, Math.min(subStartIndex + m, s.length())));
        } else {
            System.out.println("Substring not found");
        }
    }
}
```

### Explanation:
1. **Starting from `n` characters in and of `m` length:**
   - Java uses `substring(int beginIndex, int endIndex)` which is similar to C++'s `substr(int start, int length)`. We ensure the ending index does not exceed the string length using `Math.min(n + m, s.length())`.

2. **Starting from `n` characters in, up to the end of the string:**
   - This is handled by `substring(int beginIndex)` which starts from the given index till the end of the string.

3. **Whole string minus the last character:**
   - We use `substring(0, s.length() - 1)` to get the substring up to the second-last character.

4. **Starting from a known character within the string and of `m` length:**
   - First find the index of the character using `indexOf`, then create the substring with the starting index found and ensure it does not exceed the string length.

5. **Starting from a known substring within the string and of `m` length:**
   - Similarly, find the start index of the substring using `indexOf`, then create the substring up to the desired length ensuring it does not exceed the string length. If the substring is not found, appropriate messages are printed.
