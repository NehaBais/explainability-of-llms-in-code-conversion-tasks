 Certainly! Below is the equivalent Java code for the provided C code, where string interpolation is used to replace the placeholder in the original string with the value stored in the variable `extra`.

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        System.out.printf("Mary had a %s lamb.%n", extra);
    }
}
```

In this Java code:
- The variable `extra` is assigned the value "little".
- The method `System.out.printf` is used for string interpolation, where the placeholder `%s` is replaced by the value of `extra`. The format specifier `%n` ensures that a newline character is added after the output.
