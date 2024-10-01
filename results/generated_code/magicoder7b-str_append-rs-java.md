 In Java, you can use the `+` operator to append strings directly or the `concat()` method of a string object for more control over what gets appended:

```java
public class Main {
    public static void main(String[] args) {
        String hello = "Hello world";
        System.out.println(hello + "!!!!");
    }
}
```
or 

public class Main {
    public static void main(String[] args) {
        String hello = "Hello world";
        hello += "!!!!";
        System.out.println(hello);
    }
}
