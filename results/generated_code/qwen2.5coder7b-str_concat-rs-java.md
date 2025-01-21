Here is your Rust code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = new String("hello");
        System.out.println(s);

        String s1 = s + " world";
        System.out.println(s1);
    }
}
```

Please note that in Java, strings are immutable. Therefore, when you do `s + " world"`, a new string is created which concatenates the original string and the literal " world". The original string remains unchanged. If you want to keep the result of the concatenation, you need to assign it back to `s` or create a new variable as in the code above.
