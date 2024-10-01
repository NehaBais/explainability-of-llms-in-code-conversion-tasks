In Java, you can achieve this by creating a String variable and then concatenate it with another string. Here is your equivalent code in Java.

```java
public class Main {
    public static void main(String[] args) {
        String s = "world!";
        s = "Hello, " + s;
        System.out.println(s);
    }
}
```

This code declares a variable `s` of type `String` and assigns it the value `"world!"`. Then, it concatenates another string `"Hello, "` with the value of `s`, and reassigns this concatenated string back to `s`. Finally, it prints out the final value of `s`.
