 Here's the equivalent Java code for the given C code. In Java, you can use the `StringBuilder` class to handle string manipulations more safely and efficiently than using raw strings or character arrays.

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder str = new StringBuilder("Good Morning");
        String cstr = " to all";
        String cstr2 = " !!!";

        // Append the string literals to the StringBuilder
        str.append(cstr).append(cstr2);

        // Print the contents of the StringBuilder after appending
        System.out.println(str.toString());
    }
}
```

In this Java code:
- We use a `StringBuilder` to handle string manipulations, which is more flexible and safer than using raw strings or character arrays in C.
- The `append` method of `StringBuilder` is used to concatenate the strings.
- After appending the new strings, we convert the `StringBuilder` back to a string using the `toString()` method and print it out.
