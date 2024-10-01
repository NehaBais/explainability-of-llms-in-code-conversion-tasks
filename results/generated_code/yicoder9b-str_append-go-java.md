Here is the equivalent Java code for your Golang program: 

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder();
        s.append("foo");
        s.append("bar");
        System.out.println(s.toString());
    }
}
```
In Java, the `StringBuilder` class is used to represent a mutable sequence of characters. The `append()` method of this class is used to concatenate strings in an efficient way. After appending the two string literals "foo" and "bar", it prints out the resultant string which would be "foobar".
