Here is the equivalent Java code for the provided Go code:

```java
public class Main {

  public static void main(String[] args) {

    String str = "Mary had a %s lamb";
    String txt = "big";
    String out = String.format(str, txt));
    System.out.println(out);
  }
}
```

This Java code does exactly the same thing as your provided Go code. It uses `java.util.Formatter` for string formatting similar to Go's `fmt.Sprintf()`. This is done inside a `main()` method, which is the entry point of any Java application. The formatted result is printed to the console using `System.out.println()`.
