In Java, we can achieve string interpolation using StringBuilder class or also by replacing character sequence in the string. Here's how you could do this:

```java
public class Main {
    public static void main(String[] args) {
        String original = "Mary had a X lamb";
        String little = "little";

        // Using replace method
        String replaced = original.replace("X", little);

        System.out.println(replaced);  //prints: Mary had a little lamb

        // Another way using StringBuilder class
        StringBuilder stringBuilder = new StringBuilder(original);
        int index = original.indexOf("X");
        if(index != -1) {
            stringBuilder.replace(index, index + "X".length(), little);
        }

        System.out.println(stringBuilder.toString());  //prints: Mary had a little lamb
    }
}
```
In this Java code, I have shown two ways to replace the substring in a string. The `replace` method is used directly on the original string. This will create a new String without changing the original one because Strings are immutable in Java.

The second way uses the StringBuilder class that allows mutable strings. We first get the index of 'X', and if found, we replace it with our desired value using the `replace` method provided by StringBuilder.
