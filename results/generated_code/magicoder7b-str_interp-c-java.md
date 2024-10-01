 In Java, you can use the `String.format()` function to do string interpolation similar to how it's done in C. The `%s` is a placeholder for a string argument and it will be replaced by the provided arguments in order. Here's your code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        System.out.println(String.format("Mary had a %s lamb.", extra));
    }
}
```
In this Java code, `extra` is the string that will replace `%s` in the `String.format()` method.
