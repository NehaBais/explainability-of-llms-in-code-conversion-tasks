In Java, we can use `String.format()` method or `System.out.printf()` function to do string interpolation (also known as string formatting). 

Here is the equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {

        String extra = "little";
        String new_str = String.format("Mary had a %s lamb.", extra);
        System.out.println(new_str);
    }
}
```

This code will produce the same output as your Python example: 

Mary had a little lamb.
