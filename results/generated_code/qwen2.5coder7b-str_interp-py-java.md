In Java, you can use String.format() method to achieve the same effect as Python's f-string. Here is how you would convert the given code:

```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String new_str = String.format("Mary had a %s lamb.", extra);
        System.out.println(new_str);
    }
}
```

In this Java code, `%s` is used as a placeholder for the string variable `extra`. The value of `extra` will replace `%s` in the formatted string.
