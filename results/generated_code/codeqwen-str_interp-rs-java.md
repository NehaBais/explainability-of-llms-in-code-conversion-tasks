In Java, string interpolation is not directly supported. However, it can be achieved by using String formatting or concatenation. Here's an example:

```java
public class Main {
    public static void main(String[] args) {
        String adj = "little";
        String name = "Mary";
        System.out.println("Mary had a " + adj + " lamb");
        System.out.printf("%s had a %s lamb", name, adj);
    }
}
```

In the code above, we used String concatenation to replace X in the string. The `printf` method is another way to perform string formatting in Java. It allows you to specify the format of the output and can handle more complex cases than simple concatenation.
