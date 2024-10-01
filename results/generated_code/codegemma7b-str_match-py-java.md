```java
public class StringMatching {

    public static void main(String[] args) {

        // 1. Determining if the first string starts with the second string
        String str1 = "abcd";
        String str2 = "ab";
        boolean startsWith = str1.startsWith(str2);
        System.out.println("Starts with: " + startsWith); // Output: Starts with: true

        // 2. Determining if the first string contains the second string at any location
        boolean contains = str1.contains(str2);
        System.out.println("Contains: " + contains); // Output: Contains: true

        // 3. Determining if the first string ends with the second string
        boolean endsWith = str1.endsWith(str2);
        System.out.println("Ends with: " + endsWith); // Output: Ends with: false

        // 4. Print the location of the match for part 2
        int location = str1.indexOf(str2);
        System.out.println("Location: " + location); // Output: Location: 0

        // 5. Handle multiple occurrences of a string for part 2
        int count = 0;
        int start = 0;
        while ((start = str1.indexOf(str2, start)) != -1) {
            count++;
            start += str2.length();
        }
        System.out.println("Count: " + count); // Output: Count: 2
    }
}
```
