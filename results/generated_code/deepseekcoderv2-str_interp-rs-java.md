 Sure, here is the equivalent code in Java using string interpolation:

```java
public class Main {
    public static void main(String[] args) {
        String name = "Mary";
        String adj = "little";
        
        // Using formatted strings for simple replacements
        System.out.printf("%s had a %s lamb\n", name, adj);
        
        // Specifying order
        System.out.printf("%s had a %s lamb\n", "Mary", "little");
        
        // Named arguments
        System.out.printf("%s had a %s lamb\n", name, adj);
    }
}
```

In Java, you can use `String.format` for string interpolation or simply concatenate strings with placeholders and pass the values as arguments. The example above demonstrates both methods: using formatted strings and named arguments.
