The equivalent Java code would be as follows:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        sb.append("foo");
        sb.append("bar");
        System.out<｜begin▁of▁sentence｜>.print(sb.toString());
    }
}
```
In this code, we create a `StringBuilder` object and append the strings "foo" and "bar" to it using the `append()` function. We then print out the final string with `System.out.println()`. 

Please note that in Java, `System.out.println(sb.toString());` is used instead of `fmt.Print(s.String())` as StringBuilder doesn't have a direct equivalent to fmt in Golang. In Java, the idiomatic way to print things (similar to what you did in Go) is through `System.out.println()` or `System.out.printf()` functions.

