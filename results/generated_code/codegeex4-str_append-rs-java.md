The equivalent Java code would be:

```java
public class Main {
  public static void main(String[] args){
    StringBuilder sb = new StringBuilder("Hello world");
    sb.append("!!!!");
    System.out.println(sb.toString());
  }
}
```

In this conversion, we used `StringBuilder` for mutable strings as there is no direct equivalent of Rust's `String::from()` method in Java. We then appended the string literal "!!!!" using `append()`, and printed the result with `toString()`.
