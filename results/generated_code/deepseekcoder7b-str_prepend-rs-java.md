In Java, you can use `StringBuilder` to achieve this. Below is the equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder("World");
        s.insert(0, "Hello ");
        System.out.println(s);
    }
}
```

