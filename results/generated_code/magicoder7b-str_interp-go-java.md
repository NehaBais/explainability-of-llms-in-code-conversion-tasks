 In Java, you can use the `String.format()` method to do string interpolation similar to Golang's `fmt.Sprintf()`. Here is how you might implement this in Java:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```
This will output: `Mary had a little lamb`
