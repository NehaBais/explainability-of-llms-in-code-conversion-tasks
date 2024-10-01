```java
public class StringInterpolation {

    public static void main(String[] args) {
        String original = "Mary had a X lamb.";
        String toBeReplaced = "X";
        String replacement = "little";

        String newString = original.replaceFirst(toBeReplaced, replacement);

        System.out.println("String after replacement: " + newString);
    }
}
```

**Explanation:**

* The `replaceFirst()` method in Java is used to replace the first occurrence of a substring in a string.
* The first argument to `replaceFirst()` is the substring to be replaced.
* The second argument is the replacement substring.
* In this case, we are replacing the first occurrence of "X" in the `original` string with the `replacement` string.
* The `newString` variable is then assigned the updated string.
