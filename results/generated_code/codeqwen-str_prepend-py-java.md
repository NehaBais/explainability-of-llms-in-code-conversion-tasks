Here is the equivalent Java code for your Python script:

```java
public class Main {
    public static void main(String[] args) {
        String s = "12345678";
        s = "0" + s;  // by concatenation
        System.out.println(s);
    }
}
```

In the Java code, we declare a string variable `s` and set its value to "12345678". Then we prepend it with "0" using the `+` operator for string concatenation and assign the result back to `s`. Finally, we print out the new value of `s` using `System.out.println(s)`.
