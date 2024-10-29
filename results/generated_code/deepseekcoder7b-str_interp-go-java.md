In Java, we can use the `String.format()` method or the `StringBuilder` class to accomplish string interpolation (replacement of defined character sequences). Here is how you would convert your code from Golang to Java:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "big";
        String out = String.format(str, txt);
        System.out<｜begin▁of▁sentence｜>.out.println(out);
    }
}
```
In this Java code, `%s` is used as the placeholder for string replacement similar to your Golang example. The value of variable `txt` will replace the `%s` in the original string before it's printed out. It prints "Mary had a big lamb".

