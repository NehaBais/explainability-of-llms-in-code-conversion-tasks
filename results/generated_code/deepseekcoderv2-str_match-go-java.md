 Sure! Below is the equivalent Java code for the provided Go code:

```java
public class StringMatching {
    public static void match(String first, String second) {
        System.out.printf("1. %s starts with %s: %b\n", first, second, first.startsWith(second));
        
        int index = first.indexOf(second);
        boolean contains = index >= 0;
        System.out.printf("2. %s contains %s: %b,\n", first, second, contains);
        
        if (contains) {
            System.out.printf("2.1. at location %d,\n", index);
            for (int start = index + 1;;) {
                int nextIndex = first.indexOf(second, start);
                if (nextIndex < 0) {
                    break;
                }
                System.out.printf("2.2. at location %d,\n", nextIndex);
                start = nextIndex + 1;
            }
            System.out.println("2.2. and that's all");
        }
        
        boolean endsWith = first.endsWith(second);
        System.out.printf("3. %s ends with %s: %b\n", first, second, endsWith);
    }

    public static void main(String[] args) {
        match("abracadabra", "abr");
    }
}
```

### Explanation:
1. **Starting With**: The `startsWith` method in Java is used to check if the first string starts with the second string.
2. **Containing**: The `indexOf` method in Java is used to find the index of the second string within the first string. If found, it returns the starting index; otherwise, it returns -1.
3. **Ending With**: The `endsWith` method is used to check if the first string ends with the second string.
4. **Printing Locations**: For the part where we need to print locations of multiple occurrences, we use a loop with `indexOf` starting from the last found index plus one.

This Java code should provide the same functionality as the provided Go code.
