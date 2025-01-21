In Java, the equivalent code would be:

```java
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal");
        String s2 = s + " literal";
        System.out.println(s2);
    }
}
```
The `+` operator is used to concatenate strings in Java. In this code, we create two string variables, `s` and `s2`, both of which are initialized with the value "hello". We then use the `+` operator to concatenate these two values with a space (" ") in between, resulting in the output: "hello literal hello literal".
