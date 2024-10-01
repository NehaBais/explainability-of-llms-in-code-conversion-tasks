In Java, you can achieve this by creating a StringBuilder object, appending both strings and then converting it back to String. Here is how:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("World");
        sb.insert(0, "Hello ");
        System.out.println(sb.toString());
    }
}
```
In this Java code:

1. We create a new StringBuilder object with the value of `"World"`.
2. We use `insert` method to prepend `"Hello "` at index 0.
3. Finally, we convert the StringBuilder object back to String using `toString()` and print it out.
