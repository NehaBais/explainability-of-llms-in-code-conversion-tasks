Here is your Python code converted to Java. In Java, string interpolation is performed using the `String.format()` method or since Java 5, you can use the `printf()` function as well. Here I'll show both options:

Using String.format():
```java
public class Main {
    public static void main(String[] args) {
        String extra = "little";
        String newStr = String.format("Mary had a %s lamb.", extra);
        System.out.println(newStr);
    }
}
```
Using printf():

public class Main {
    public static void main(String[] args) {
        String extra = "little";
        System.out.printf("Mary had a %s lamb.", extra);
    }
}

In both of these examples, the `%s` in the string is where Java will replace it with whatever value you pass as argument to the function (String.format() or printf()). The `%s` is for string placeholders. If we have different types of placeholders like integers(%d), floating point numbers(%f) etc., then they can be used accordingly.

